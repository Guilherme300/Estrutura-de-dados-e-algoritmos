#include "queue.h"
#include <iostream>

using namespace queue;
using namespace std;

class Tree{
    public:
        Node *root;

        void create(){
            int x;
            Queue *q = new Queue();

            cout << "Enter root value: ";
            cin >> x;
            
            root = new Node;
            root->data = x;

            q->enqueue(root);

            while(!q->isEmpty())
            {
                Node* r = q->dequeue();
                cout << "Enter " << r->data << " left child ";
                cin >> x;
                if (x != -1){
                    Node* l = new Node();
                    l->data = x;
                    r->lchild = l;

                    q->enqueue(l);
                }

                cout << "Enter " << r->data << " rightChild child ";
                cin >> x;
                if (x != -1){
                    Node* l = new Node();
                    l->data = x;
                    r->rchild = l;

                    q->enqueue(l);
                }
            }

        }

        void preOrder(Node* q){
            if(q){
                cout << q->data << " ";
                preOrder(q->lchild);
                preOrder(q->rchild);
            }
        }

        void inOrder(Node* q){
            if(q){
                inOrder(q->lchild);
                cout << q->data << " ";
                inOrder(q->rchild);
            }
        }

        void postOrder(Node* q){
            if(q){
                inOrder(q->lchild);
                inOrder(q->rchild);
                cout << q->data << " ";
            }
        }

};

int main(){
    Tree *t = new Tree();
    t->create();
    t->preOrder(t->root);

    return 0;
}