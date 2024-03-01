#include<iostream>
using namespace std;
template<class T>
class stack
{
    private:
    T *arr;
    int size;
    int tos;
    public:
    stack(int size)  //parametrized construtor
    {
        this->size=size;//this is the pointer whichh points to the current object of class 
        //it is often used when we want to assign the parameter as same name to the member
        arr=new T[size];//dynamically allocated memory for array
        tos=-1; //

    }
    bool isFull();
    bool isEmpty();
    void push(T n);
    void pop();
    T top();
    T peek(int position);
    void display();
    ~stack()  //destructer 
    {
        delete[] arr;//deallocates the memory assigned dynamically to the array
    }

};
template<class T> //always write this when we want to define the function outside the class
bool stack<T>::isFull()//when  we write stack always mention it is of template type
{
    if(tos==size-1)
    return true;
    else 
    return false;
}
template<class T>
bool stack<T>::isEmpty()
{
    if(tos==-1)
    return true;
    else
    return false;
}
template<class T>
void stack<T>::push(T n)
{
   if(!isFull())
   {
    top++;
    arr[tos]=n;
    cout<<arr[tos]<<" pushed into the stack"<<endl;
   }
   else
   cout<<"stack overflow\n";
}
template<class T>
void stack<T>::pop()
{
    if(!isEmpty()){
    cout<<arr[tos]<<" popped from stack"<<endl;
    tos--;
    }
    else
    cout<<"stack underflow\n";
}
template<class T>
T stack<T>::top()
{
    if(!isEmpty())
  return arr[tos];
  else
  cout<<"Empty stack";
}
template<class T>
void stack<T>::display()
{
    int i;
    for(i=tos;i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }
}
template<class T>
T stack<T>::peek(int position)
{
    int index=tos-position+1;
   if(index<0)
   cout<<"Invalid position\n";
   else
   cout<<arr[index]<<endl;
}



int main()
{
    stack<int> *s;//pointer to the stack to avoid the copy
    s=new stack<int>(10); //dynamically assigns the memory of s
    for(int i=1;i<10;i++)
    s->push(i);
    for(int i=1;i<5;i++)
    s->pop(); // -> called dereferencing operator used if pointer to the object it is same as (*)s.push(val)
    cout<<s->top()<<endl;
    s->peek(4);
    s->display();

}