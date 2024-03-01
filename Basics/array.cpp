#include<iostream>
using namespace std;
void fun(int *a,int size)//*a is a pointer to the first element of array and size is number of elements in array.
{
  for(int i=0;i<size;i++)//instead of using pointer we can use [] syntax like int a[]
  cout<<*(a+i)<<" ";
}
int main()
{
    int arr[]={2,4,6,8,10};
    cout<<"from fn call"<<endl;
    int  n = sizeof(arr)/sizeof(arr[0]);
    fun(arr,n);
    cout<<endl<<"From main fn\n";
    for(int x:arr) //Note for each loop will not work in function fun 
    cout<<x<<" ";
    return 0;
}