#include<iostream>
using namespace std;
struct Node
{
    double data;
    Node *next;
    Node *pre;
    Node();
    Node (double value ,Node *link = NULL,Node *link2 = NULL);
};
Node::Node(){
    next=NULL;
} 
Node::Node (double value, Node *link,Node *link2){

    data = value;
    next = link;
    pre = link2;

}
int main(){
    Node *A = new Node (10);
    Node *B = new Node (20);
    Node *C = new Node (50);
    
    A->next=B;
    B->next=C;
    B->pre=A;
    C->pre=B;


cout<<A<<"      "<<A->data<<"       "<<A->pre<<"       "<<A->next<<endl;
cout<<B<<"      "<<B->data<<"       "<<B->pre<<"       "<<B->next<<endl;
cout<<C<<"      "<<C->data<<"       "<<C->pre<<"       "<<C->next<<endl;
    return 0 ;
}
