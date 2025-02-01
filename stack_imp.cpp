#include <iostream>
#include "stack.h"
using namespace std;

// Implementation of linked stack
template<class t>
stack<t>::stack() {
    top = nullptr;
}

template<class t>
void stack<t>::push(t Item) {
    temp = new node;
    temp->element = Item;
    temp->item = top;
    top = temp;
}

template<class t>
void stack<t>::pop() {
    if(IsEmpty()){
        cerr << "Stack Underflow, cannot pop while stack is empty\n";
        exit(-1);
    }
    temp = top;
    top = top->item;
    delete temp;
}

template<class t>
bool stack<t>::IsEmpty() {
    return top == nullptr;
}

template<class t>
void stack<t>::display() {
    if(IsEmpty()){
        return;
    }
    temp = top;
    cout << "[ ";
    while(temp != nullptr){
        cout << temp->element << ' ';
        temp = temp->item;
    }
    cout << "]\n";
}

template<class t>
t stack<t>::Top() {
    if(IsEmpty()){
        cerr << "Stack is empty cannot access top\n";
        exit(-1);
    }
    else{
        return top->element;
    }
}