#include <iostream>
using namespace std;

struct Node {

int data;
Node *next;
Node();
Node (int value , Node *link);	
};

Node::Node(){
	
	next = NULL;
		
}
Node::Node(int value, Node *link){
	
	data = value;
	next = link;
	
}

int main()
{
	
	
	Node *A = new Node (5,NULL);
	Node *B = new Node (6,NULL);
	Node *C = new Node (7,NULL); 
	
	A->next = B;
	B->next = C;
	
	cout << A <<"    "<< A->data<<"    "<<A->next << endl;
	cout << B <<"    "<< B->data<<"    "<<B->next << endl;
	cout << C <<"    "<< C->data<<"    "<<C->next << endl;
	
	
	
	return 0;
}