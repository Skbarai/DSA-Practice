#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a=5,b=6;
    cout<<"The values of a & b before swapping "<<endl<<a<<endl<<b<<endl;
    swap(a,b);
    cout<<"The values of a & b after swapping "<<endl<<a<<endl<<b<<endl;
    return 0; //swap function here behaves like inline function and changes the actual arguments values as x and y are 
//same name given to a and b     
}