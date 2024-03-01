#include<iostream>
using namespace std;
int pow(int x,int n)
{
    if(n==0)
    return 1;
    else if(n%2==0)
    return pow(x*x,n/2);
    else 
    return x*pow(x*x,(n-1)/2);
}
int main()
{
    int base,exp;
    cout<<"Enter the base and exponent: ";
    cin>>base>>exp;
    cout<<endl<<pow(base,exp);
    return 0;
}
//time complexity O(logn)