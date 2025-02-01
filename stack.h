
#ifndef SET_STACK_H
#define SET_STACK_H
template<class t>
class stack{
private:
    struct node{
         t element;
         node* item;
    };
    node *top,*temp;

public:
    stack();
    void push(t);
    void pop();
    void display();
    bool IsEmpty();
    t Top();
};

#endif //SET_STACK_H