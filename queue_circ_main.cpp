#include "queue_circ_array.h"

int main(){

    queue<int>q(5);
    cout << q.is_empty() << endl;
    q.push(4);
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(12);
    q.pop();
    int ind = q.search(5);
    cout << ind << endl;
    q.display();
    cout << q.get_front() << endl << q.get_back();
    return 0;
}
