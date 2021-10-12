#include <stddef.h>

namespace queue{
    class Node{
        public:
            Node* lchild;
            int data;
            Node* rchild;
    };

    class Queue{
        private:
            int front;
            int rear;
            int size;
            Node** a;

        public:
            Queue(){
                front=rear=-1;
                this->size = 10;
                a = new Node*[this->size];
            }
            Queue(int size){
                front=rear=-1;
                this->size = size;            
                a = new Node*[this->size];
            }

            void enqueue(Node* data){
                if (rear == size-1)
                    return;
                a[++rear] = data;
            }

            Node* dequeue(){
                if (isEmpty()){
                    return NULL;
                }

                Node* x = a[++front];

                return x;
            }

            int isEmpty(){
                return front == rear ? 1 : 0;
            }
    };

}