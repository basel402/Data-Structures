
#include "set_imp.cpp"
int main() {

    Set<int> st;
    cout << st.set_size() << endl;
    st.add_item(10);
    st.add_item(13);
    st.add_item(11);
    cout << st.set_size() << endl;
    st.remove_item(14);
    cout << st.set_size() << endl;
    st.remove_item(11);
    cout << st.set_size() << endl;
    bool flag = st.search_item(14);
    cout << flag << endl;
    flag = st.search_item(10);
    cout << flag << endl;
    int *ptr = st.dynamic_arr();
    cout << ptr[0] << endl;
    cout << ptr[1] << endl;
    st.delete_ptr();
}