#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=5,b=6;
    cout<<"The values of a & b before swapping "<<endl<<a<<endl<<b<<endl;
    swap(&a,&b);
    cout<<"The values of a & b after swapping "<<endl<<a<<endl<<b<<endl;
    return 0; //The actual parameters change will be seen as the function swap 
    //changes the values of formal arguments by using their address
    
}