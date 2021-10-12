#include <iostream>

using namespace std;



namespace linkedListStack{

    class NodeTree{
        public:
            NodeTree* lchild;
            int data;
            NodeTree* rchild;
    };

    class Node{
        public:
            NodeTree* data;
            Node* next;
    };

    class LinkedListStack{
        private:
            Node *top = NULL;

        public:
            void put(NodeTree* data){
                Node *tmp = new Node();
                tmp->data = data;
                tmp->next = top;
                top = tmp;
            }

            NodeTree* pop(){
                NodeTree* x = NULL;
                if (!isEmpty()){
                    x = top->data;
                    Node *tmp = top;
                    top = top->next ? top->next : NULL;
                    delete(tmp);
                }

                return x;
            }

            NodeTree* stackTop(){
                NodeTree* x = NULL;
                if (top)
                    x = top->data;

                return x;
            }

            int isEmpty(){
                return top == NULL ? 1 : 0;
            }
    };

}