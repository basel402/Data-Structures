#include "set.h"

template<class t>
void Set<t>::add_item(t add) {
    if(find(semi_set.begin(),semi_set.end(),add)==semi_set.end()){
        semi_set.push_back(add);
    }
    sort(semi_set.begin(),semi_set.end());
}

template<class t>
void Set<t>::remove_item(t rem) {
    auto it = find(semi_set.begin(),semi_set.end(),rem);
    if(it!=semi_set.end()){
        semi_set.erase(it);
    }
}

template<class t>
int Set<t>::set_size() {
    return semi_set.size();
}

template<class t>
bool Set<t>::search_item(t ser) {
    if(find(semi_set.begin(),semi_set.end(),ser)==semi_set.end()){
        return false;
    }
    return true;
}

template<class t>
t* Set<t>::dynamic_arr() {
    ptr = new t[semi_set.size()];
    for (int i = 0; i < semi_set.size(); ++i) {
        ptr[i] = semi_set[i];
    }
    return ptr;
}

template<class t>
void Set<t>::delete_ptr() {
    delete []ptr;
}