#include<iostream>
using namespace std;
struct Node
{
    double data;
    Node *next;
    Node();
    Node (double value ,Node *link = NULL);
};
Node::Node(){
    next=NULL;
} 
Node::Node (double value, Node *link){

    data = value;
    next = link;

}
int main(){
    Node *A = new Node (10);
    Node *B = new Node (20);
    Node *C = new Node (50);
    
    A->next=B;
    B->next=C;
    C->next=A;

cout<<A<<"      "<<A->data<<"       "<<A->next<<endl;
cout<<B<<"      "<<B->data<<"       "<<B->next<<endl;
cout<<C<<"      "<<C->data<<"       "<<C->next<<endl;
int x;
cin>>x;
    return 0 ;
}
