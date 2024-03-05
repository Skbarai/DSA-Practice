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
    node(){this->next=NULL;};
};
class stack
{
    private:
    node* tos=new node;
    public:
    bool empty();
    bool full();
    void push(int n);
    void pop();
    int top();
    void displayStack();
};
bool stack::empty()
{
    if(tos==NULL)
    return true;
    else
    return false;
}
bool stack::full()
{
    node* temp=new node;
    if(temp==NULL) // heap is full 
    return true;
    else
    return false;
}
void stack::push(int n)
{
    if(!full())
    {
     node* ptr=new node(n);
     ptr->next=tos;
     tos=ptr;
    }
    else{cout<<"Stack Overflow\n";}
}
void stack::pop()
{
    if(!empty())
    {
        node* ptr=tos;
        tos=tos->next;
        delete ptr;
    }
    else
    {
        cout<<"Stack underflow\n";
    }
}
int stack:: top()
{
  if(!empty())
  return tos->data;
  else{
    cout<<"stack is empty\n";
  }
}
void stack::displayStack()
{
    node* ptr=tos;
    while(ptr->next!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    stack s;
    s.push(5);
    s.push(3);
    s.push(8);
    s.push(9);
    s.pop();
   cout<<s.top()<<endl;
   cout<<"Stack elements are "<<endl;
   s.displayStack();
   s.pop();
   s.pop();
   s.pop();
   s.pop();
   cout<<endl<<s.top()<<endl;
   s.displayStack();
}