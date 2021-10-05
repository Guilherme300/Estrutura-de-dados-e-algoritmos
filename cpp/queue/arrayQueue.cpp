#include <iostream>

using namespace std;

typedef struct Node{
    int q;
    int v;
    int size;
    int *a;
} node;

class Queue{
    private:
        node n;

    public:
        Queue(int size){
            n.size = size;            
            n.a = new int[size];
            n.q = 0;
            n.v = 0;
        }

        void enqueue(int data){
            if (n.q >= n.size)
                return;
            n.a[n.q++] = data;
        }

        int dequeue(){
            if (isEmpty()){
                return -1;
            }

            int data = n.a[n.v++];

            return data;
        }

        int isEmpty(){
            return n.q == n.v ? 1 : 0;
        }
};

int main(){
    Queue *q = new Queue(5);

    q->enqueue(5);
    q->enqueue(10);
    q->enqueue(22);

    while(!q->isEmpty()){
        cout << q->dequeue() << endl;
    }

    return 0;
}