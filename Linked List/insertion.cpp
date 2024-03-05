#include<iostream>
using namespace std;
class node 
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertionatbegining(node* &head,int data) 
{
    node* ptr=new node(data);
    ptr->next=head;
    head=ptr;
}
void insertionatposition(node * &head,int pos,int data)
{
    
    node* item=new node(data);
    if(pos==1||head==NULL)
    {
        insertionatbegining(head,data);
    }
    else{
        node* ptr=head;
    for(int i=1;i<pos-1 && ptr!=NULL;i++)
    {
        ptr=ptr->next;
    }
    item->next=ptr->next;
    ptr->next=item;

}
}
void insertionatend(node* &head,int data)
{
    node* item=new node(data);
    node* ptr=head;
    while(ptr->next!=NULL) //note: ptr->next!=NULL
    {
        ptr=ptr->next;
    }
    ptr->next=item;
}
void traversal(node * ptr)
{
   int count=0;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
        count++;
    }
    cout<<"No. of nodes= "<<count<<endl;
}
int maxelement(node*&head)
{
    node* ptr=head;
    int max=ptr->data;
    while(ptr!=NULL)
    {
        
        if(ptr->data>max)
        {
            max=ptr->data;
        }
        ptr=ptr->next;
    }
    return max;
}
void searchelement(node* &head,int key)
{
    node* ptr=head;
    int count=1;
    while(ptr!=NULL)
    {
        if(ptr->data==key)
        {
        cout<<"Found at node "<<count<<endl;
        break;
        }
        
        ptr=ptr->next;
        count++;

    }
       if(ptr==NULL)
        cout<<"Not found\n";
}
void deletionathead(node*&head)
{
    node*ptr=head;
    if(head==NULL)
    {
        cout<<"Empty list"<<endl;
    }
    else{
        head=head->next;
        delete ptr;
    }
}
void deletionatposition(node* &head,int pos)
{
    node*p,*q;
    p=head;
    q=head->next;
    for(int i=1;i<pos-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    delete q;
}
void deletionatend(node* &head)
{
    node*ptr=head;
    node*temp;
    while(ptr->next!=NULL)
    { 
        temp=ptr;
        ptr=ptr->next;
    }
    temp->next=NULL;
    free(ptr);
}
void destroylist(node* &head)
{
    node* ptr=head;
    while(head!=NULL)
    {
        head=head->next;
        delete ptr;
       ptr=head;
    }
    
}
int main(){
    node* head=new node(5);
    insertionatbegining(head,6);
    insertionatbegining(head,7);
    insertionatbegining(head,7);
    insertionatposition(head,2,8);
    insertionatposition(head,4,24);
    insertionatposition(head,1,100);
    insertionatposition(head,8,50);
    insertionatend(head,45);
    traversal(head);
    cout<<"Max element= "<<maxelement(head)<<endl;
    searchelement(head,100);
    deletionathead(head);
    deletionatposition(head,4);
    deletionathead(head);
    traversal(head);
    deletionatend(head);
    traversal(head);
    destroylist(head);
    traversal(head);
}