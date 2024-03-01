#include<iostream>
using namespace std;
#define MAX_SIZE 20
class stack
{
    private:
    int top=-1;
    int arr[MAX_SIZE];
    public:
    void push(int n){
        if(top==MAX_SIZE-1)
        {
            cout<<"Overflow of stack"<<endl;
        }
        else{
            top++;
            arr[top]=n;
            cout<<"Element pushed into stack is "<<n<<endl;
        }
    }

 void pop()
        {
            if(top==-1)
            {
             cout<<"Underflow of stack"<<endl;
            }
            else
            {
              cout<<"Element poped from stack is "<<arr[top]<<endl;
              top--;
            }
        }
};
int main()
{
    stack s;
    s.push(5);
    s.push(6);
    s.push(8);
    s.pop();
    s.pop();
    s.pop();
    s.pop();

}