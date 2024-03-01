#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle
{
    int length, breadth;
};
int main()
{  
    rectangle *p;
    p=new rectangle;  //dynamic memory allocation for structure variable in c++
     cout<<"Enter the Length of Rectangle: ";
     cin>>p->length;
     cout<<"\nEnter the Breadth of Rectangle: ";
     cin>>p->breadth;
     
     if(p->length >0 && p->breadth >0)
     {
         cout << "\nArea of Rectangle is : " << p->length*p->breadth;
         cout << "\nPerimeter of Rectangle is : " << 2*(p->length + p->breadth);
     }
     else
     {
        cout << "\nLength and Breadth must be greater than zero.";
     }
     
     delete p;       //deleting dynamic memory allocated to structure variable in c
    //struct rectangle *p;
   // p=(struct rectangle *)malloc(sizeof(struct rectangle));  //dynamic memory allocation in heap in c programming
    //p->length=15;
   // p->breadth=20;
    //printf("%d %d",p->length,p->breadth); 
   // return 0;
}