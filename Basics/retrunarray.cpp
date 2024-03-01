#include<iostream>
using namespace std;
int * fun(int n)
{
 int *p;
 p=new int[n];
 for(int  i=0;i<n;i++)
 *(p+i)=i+1;
 return p;
}
int main()
{
    int *ptr;
    ptr=fun(5);
    //displaying the elements of array using pointer
    for(int i=0;i<5;i++)
        cout<<* (ptr + i) << endl;
    delete[] ptr;//deleting dynamically allocated memory
    return 0;
}