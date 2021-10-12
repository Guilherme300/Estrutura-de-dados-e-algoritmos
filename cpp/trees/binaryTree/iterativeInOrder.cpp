#include <iostream>
#include "stack.h"

using namespace std;
using namespace linkedListStack;

void inOrder(NodeTree* t){
    LinkedListStack* s = new LinkedListStack();
    // inOrder(lchild)
    // printf(data) SHINRA TENSEI 
    // inOrder(rchild)

    while(t != NULL || !s->isEmpty())
    {
        if(t!=NULL){
            s->put(t);
            t = t->lchild;
        }
        else{
            t = s->pop();
            cout << t->data << " ";
            t = t->rchild;
        }
    }
}

int main(){

    return 0;
}