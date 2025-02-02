

#ifndef DATA_STRUCTURES_QUEUE_CIRC_ARRAY_H
#define DATA_STRUCTURES_QUEUE_CIRC_ARRAY_H

template<class t>

class queue{
    int back,front,count,size;
    t *arr;
public:
    queue(int);
    void push(t);
    void pop();
    void display();
    t get_front();
    t get_back();
    int search(t);
    bool is_empty();
    ~queue();
};

#include <iostream>
using namespace std;
// Implementation

template<class t>
queue<t>::queue(int sz) {
    size = sz;
    front = 0;
    back = size - 1;
    count = 0;
    arr = new t[size];
}

template<class t>
bool queue<t>::is_empty() {
    return (count == 0);
}

template<class t>
void queue<t>::push(t element) {
    if(count == size){
        cout << "Queue is full cant add more elements\n";
        return;
    }
    back = (back + 1) % size; // circular access
    arr[back] = element;
    count++;
}

template<class t>
void queue<t>::pop(){

    if(is_empty()){
        cout << "Queue is empty cant pop\n";
        return;
    }
    front = (front + 1) % size; // circular access
    count--;
}

template<class t>
void queue<t>::display() {
    if(is_empty()){
        cout << "Queue is empty cant display\n";
        return;
    }
    int f = front;
    while (f != back) {
        cout << arr[f] << ' ';
        f = (f + 1) % size;
    }
    cout << arr[back] << endl;
}

template<class t>
t queue<t>::get_back() {
    return arr[back];
}

template<class t>
t queue<t>::get_front() {
    return arr[front];
}

template<class t>
int queue<t>::search(t ser) {
    if(is_empty()){
        cout << "Queue is empty cant search\n";
        return -1;
    }
    int f = front;
    while (f != back) {
        if(arr[f] == ser){
            return f;
        }
        f = (f + 1) % size;
    }
    if(arr[back] == ser){
        return back;
    }
    return -1;
}

template<class t>
queue<t>::~queue() {
    delete arr;
}

#endif //DATA_STRUCTURES_QUEUE_CIRC_ARRAY_H

