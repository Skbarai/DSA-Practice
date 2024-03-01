#include<iostream>
using namespace std;
int power(int m,int n)
{
    if (n==0)
    return 1;
    else
    return (m*power(m,n-1));
}
int main()
{
    int x,a;
    cout<<"Enter the value of base and exponent: ";
    cin>>x>>a;
    cout<<endl<<power(x,a);
    return 0;
}