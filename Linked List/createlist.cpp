#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};//this class for creating nodes which will have two fields 
// data and pointer to next node
void displaylist(node *ptr){
   int counter=0;
   while(ptr!=NULL)
   {
    cout<<ptr->data<<endl;
    ptr=ptr->next;
    counter++;
   }
    cout<<counter;
}
int main()
{
    node *head=new node;//head is the begining of the list. This line will create a pointer to the object which points node type object. 
    node *second=new node;
    node *third=new node;
    head->data=10;//to access the data of node
    head->next=second;//next of head node will contain the pointer of next node type object 
    second->data=20;
    second->next=third;
    third->data=40;
    third->next=NULL;
    cout<<head<<endl<<head->data<<endl<<head->next<<endl;
    cout<<second<<endl<<second->data<<endl<<head->next->data<<endl<<second->next<<endl;
    cout<<third<<endl<<third->data<<endl<<second->next->data<<endl<<head->next->next->data<<endl<<third->next<<endl;
    displaylist(head);
}