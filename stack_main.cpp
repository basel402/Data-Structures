#include "stack_imp.cpp"

int main(){

    stack<string>st;
    st.push("basel");
    st.push("mohamed");
    st.push("youssef");
    st.push("ali");
    st.push("hussien");
    st.display();
    st.pop();
    st.pop();
    st.display();
    st.pop();
    cout << "The top element is: " << st.Top() << endl;
    return 0;
}
