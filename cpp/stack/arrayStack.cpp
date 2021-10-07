#include <iostream>

using namespace std;

typedef struct Node{
    int size;
    int *a;
} node;

class ArrayStack{
    // FIFO = first in first out
    private:
        node s;
        int top = -1;

    public:
        ArrayStack(int size){
            s.size = size;
            s.a = new int[size];
        }

        void put(int data){
            if (!isFull()){
                s.a[++top] = data;
            }
            else{
                cout << "Stack overflow" << endl;
            }
        }

        int pop(){
            int x = -1;
            if (!isEmpty()){
                x = s.a[top--];
            }

            return x;
        }

        int isEmpty(){
            return top == -1 ? 1 : 0;
        }

        int isFull(){
            return top == s.size -1 ? 1 : 0;
        }
};

int main(){
    ArrayStack *s = new ArrayStack(2);
    s->put(5);
    s->put(3);
    s->put(2);

    while(!s->isEmpty()){
        cout << s->pop() << endl;
    }

    return 0;
}