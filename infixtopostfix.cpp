
#include <bits/stdc++.h>
using namespace std;

/*
this code dont handle edge test cases
input must be a valid infix expression
*/

// chars weights
map<char,int>mp{
        {'+',1},{'-',1},
        {'*',2},{'/',2},
        {'(',3},{')',3}
};

bool spaces(string& s){
    return isspace(s.back());
}

string infix_to_postfix(string& infix){
    string postfix;
    bool brackets;
    stack<char>st;
    for(auto i:infix) {
        if ( (i >= '0' && i <= '9') || ( (isspace(i) && !spaces(postfix)) ) ) {
            postfix.push_back(i);
        }
        else if (i == ')') {
            while (st.top() != '(') {
                if(!spaces(postfix))postfix.push_back(' ');
                postfix.push_back(st.top());
                st.pop();
            }
            st.pop();
            brackets = false;
        }
        else if (!isspace(i)) {
            if (st.empty()) {
                st.push(i);
            }
            else {
                if (mp[st.top()] < mp[i] || st.top() == '(' || brackets) {
                    if (st.top() == '(')brackets = true;
                    st.push(i);
                }
                else {
                    postfix.push_back(st.top());
                    st.pop();
                    st.push(i);
                }
            }
        }
    }
    while(!st.empty()){
        if(!spaces(postfix))postfix.push_back(' ');
        postfix.push_back(st.top());
        st.pop();
    }
    return postfix;
}

int main(){
    string infix;
    cout << "Enter a valid infix expression:\n";
    getline(cin,infix);
    string postfix = infix_to_postfix(infix);
    cout << "The result = " <<  postfix << endl;

    return 0;
}
