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

    cout<< "Enter Number of Nodes" <<endl;
    int numNode;
    cin>>numNode;

    Node *head  = new Node();
    Node *tail  = head;

    for (int i = 1; i <= numNode; i++)
    {
        
        Node *n = new Node();
        cout<< "Enter Value For Node [" << i << "] :" <<endl;
        cin>>n->data;
        tail ->next = n;
        tail = tail ->next;

        
    }
    head = head ->next;
    Node *p = head;
    for (int i = 1; i < numNode; i++)
    {
        cout<< p->data <<endl;
        p=p->next;
    }
    delete (p);
    


    return 0 ;
}
