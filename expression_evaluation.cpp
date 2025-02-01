#include <bits/stdc++.h>
using namespace std;
/*
 Calculating a postfix expression
 note: division and edge test cases not handled
 input must be in a valid format
 + - / * signs only must be inputted
*/

bool is_operator(char x){
    return (x == '+' || x == '*' || x == '-' || x == '/' || x == '(' || x == ')');
}

int calc_exp(char x, int left, int right){
    int result;
    switch (x) {
        case '+':
            result = left + right;
            break;
        case '-':
            result = left - right;
            break;
        case '*':
            result = left * right;
            break;
        case '/':
            result = left / right;
            break;
    }
    return result;
}

int clac_postfix(string& exp){

    stack<int>st;
    string temp;

    for(auto i : exp){
        if(i >= '0' && i <= '9'){
            temp.push_back(i);
        }
        else if(isspace(i) && !temp.empty()){
            st.push(stoi(temp));
            temp = "";
        }
        else if(is_operator(i)){
            int left,right;
            right = st.top();
            st.pop();
            left = st.top();
            st.pop();
            int result = calc_exp(i,left,right);
            st.push(result);
        }
    }
    return st.top();
}

int main(){
    string s;
    cout << "Enter a postfix expression:\n";
    getline(cin,s);
    cout << "The result = " <<  clac_postfix(s);
}