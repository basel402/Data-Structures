
#include<bits/stdc++.h>

using namespace std;
#ifndef SET_SET_H
#define SET_SET_H

template<class t>

class Set{

    t *ptr;
    vector<t>semi_set;
public:
    void add_item(t add);
    void remove_item(t rem);
    int set_size();
    bool search_item(t ser);
    t* dynamic_arr();
    void delete_ptr();
};

#endif //SET_SET_H
