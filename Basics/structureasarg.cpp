#include<iostream>
using namespace std;
struct rectangle{
    int len;
    int breadth;
};
rectangle * changep(rectangle &r1)
{
    r1.len = 50;
    r1.breadth=100;
    return &r1;          
}  //passing by reference to avoid copying of the object.

int fun(rectangle r1)
{
int a=r1.len*r1.breadth;
return a;
} //pass by value
rectangle*initialize(rectangle*rec)//pass by address
{
    rec->len=45;
    rec->breadth=67;
    return rec;
}
int main()
{
  rectangle r={5,10};
  int area=fun(r);
  cout<<area;
  cout<<endl;
  rectangle *pr;//pointer to the structure variable
  pr=changep(r);     
  cout<<r.len<<" "<<r.breadth<<endl;
  rectangle *ptr;
  ptr=initialize(&r);
  cout<<r.len<<" "<<r.breadth<<endl;  
  return 0;

}