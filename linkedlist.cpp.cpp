#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Node {
	public:
	int data ; 
	Node* next ;
	
	Node(int d) {
		this->data = d;
		this->next = NULL;
	}
	
	~Node() {
		int value =  this->data;
		
		if(this->next !=NULL) {
			delete next;
			this->next = NULL;
			
		}
	}
	
};

void print(Node* &head) {
	Node* temp = head; 
	
	while(temp !=NULL) {
		cout<< temp ->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

void insertathead(Node* &head, int d) {
	Node* temp = new Node(d);
	
	temp->next = head;
	head = temp;
}
void insertattail (Node* &tail , int d ) {
	Node* temp = new Node(d);
	
	tail ->next = temp;
	tail = temp;
}

void insertatpos(Node* tail , Node*  head ,int pos,  int d) {
	if(pos ==1){
		insertathead(head , d);
		return;
	}
	
	Node* temp = head;
	int cnt =1;
	
	while(cnt <pos-1){
		temp = temp->next;
		cnt++;
	}
	
	
	
	if(temp->next == NULL ) {
		insertattail(tail, d);
		return;
	}
	
	Node* nodetoinsert = new Node(d);
	
	nodetoinsert->next = temp ->next;
	temp->next = nodetoinsert; 
}

void deletenodepos( Node* &head, int pos) {
	if(pos ==1 ) {
		Node* temp = head ;
		head = head->next;
		
		temp->next = NULL;
		delete temp;
	}
	
	else{
		Node* current = head;
		Node* prev = NULL;
		
		int cnt =1;
		
		while(cnt<pos) {
			prev = current;
			current = current->next;
			cnt++;
		}
		
		prev->next = current->next;
		
		delete current;
		
	}
}

void deletenodeval(Node* head , int d) {
	int cnt =1;
	
	Node* prev = NULL;
	Node* curr = head;
	
	while(curr->data != d) {
		prev = curr;
		curr = curr->next;
		cnt++;
	}
	
	if(cnt==1) {
		Node* temp = head;
		
		head = head->next;
		temp->next = NULL;
		
		delete temp;
	}
	else{
		prev->next = curr->next;
		
		curr->next = NULL;
		delete curr;
	}
}



int main() {
	// Your code goes here;
	int d;
	Node* node1 = new Node(10);
	
	Node* head = node1;
	Node* tail = node1;
	
	insertathead(head , 20);
	print(head);
	
	insertathead(head , 30);
	print(head);
	
	insertattail(tail , 5);
	print(head);
	
	insertatpos(tail , head , 4, 7);
	print(head);
	insertatpos(tail , head , 6, 2);
	print(head);
	
	deletenodepos(head , 1);
	print(head);
	
	deletenodeval(head , 2);
	print(head);
	return 0;
}