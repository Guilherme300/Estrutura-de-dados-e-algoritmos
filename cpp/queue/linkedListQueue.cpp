#include <iostream>

using namespace std;

typedef struct Node{
    int data;
    struct Node* next;
} node;

// LIFO = LAST IN FIRST OUT
class Queue{
    private:
        node *q = NULL;
        node *r = NULL;

    public:
        // O(1)
        void enqueue(int data){
            node *tmp = new node;
            tmp->data = data;
            tmp->next = NULL;

            if (q == NULL){
                q = tmp;
                r = tmp;
            }

            r->next = tmp;
            r = r->next;
        }

        // O(1)
        int dequeue(){
            if(q == NULL){
                return -1;
            }
            int data = q->data;

            if (q->next){
                q = q->next;
            }
            else{
                q = NULL;
            }

            return data;
        }
        
        int isEmpty(){
        	return q == NULL ? 1 : 0;
		}
};

int main(){
    Queue *q = new Queue();
    q->enqueue(2);
    q->enqueue(4);
    
    while(!q->isEmpty()){
    	cout << q->dequeue() << endl;
	}
    
    return 0;
}
