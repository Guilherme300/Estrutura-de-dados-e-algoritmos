#include <iostream>

using namespace std;

typedef struct Node{
    int data;
    struct Node *next;
} node;

class LinkedListStack{
    private:
        node *top = NULL;

    public:
        void put(int data){
            node *tmp = new node;
            tmp->data = data;
            tmp->next = top;
            top = tmp;
        }

        int pop(){
            int x = -1;
            if (!isEmpty()){
                x = top->data;
                node *tmp = top;
                top = top->next ? top->next : NULL;
                delete(tmp);
            }

            return x;
        }

        int stackTop(){
            int x = -1;
            if (top)
                x = top->data;

            return x;
        }

        int isEmpty(){
            return top == NULL ? 1 : 0;
        }
};

int main(){
    LinkedListStack *s = new LinkedListStack();
    s->put(5);
    s->put(3);
    s->put(6);
    s->put(9);

    while(!s->isEmpty()){
        cout << s->pop() << endl;
    }

    return 0;
}