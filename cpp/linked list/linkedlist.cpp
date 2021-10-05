#include <iostream>

using namespace std;

struct Node{
	int data;
	struct Node *next;
};

class LinkedList{
	private:
		struct Node *head = NULL;
		
	public:
		void insert(int data){
			cout << "Inserting.. " << data << endl;
			if (head == NULL){
				head = new Node;
				head->data = data;
				head->next = NULL;
			}
			else{
				struct Node *tmp = head;
				while(tmp->next){
					tmp = tmp->next;
				}	
				
				struct Node *node = new Node;
				node->data = data;
				node->next = NULL;
				
				tmp->next = node;
			}
		}
		
		int deleteX(int index){

		}
		
		void display(){
			struct Node *tmp = head;
			
			while(tmp->next){
				cout << tmp->data << endl;
				tmp = tmp->next;
			}
			
			cout << tmp->data << endl;
		}
};

int main(){
	LinkedList *ll = new LinkedList();
	ll->insert(55);
	ll->insert(45);
	ll->insert(33);
	
	ll->display();
	cout << endl;
	ll->deleteX(0);

	ll->display();
	
	return 0;
}
