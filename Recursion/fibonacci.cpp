#include<iostream>
using namespace std;
int fib(int n)
{
    if(n>0)
    {
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else 
    return (fib(n-1)+fib(n-2));
    }
}

int main()
{
    int n;
    cout<<"Enter which term you want :";
    cin>>n;
    cout<<n<<"th term is "<<fib(n);
}