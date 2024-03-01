#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle()
    {
        length=0;
        breadth=0;//default constructor;
    }
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    } //parameterized constructor
    void input();
    int area();
    void displayArea();
};
void rectangle::input()
{
 cout<<"Enter the length of the rectangle: ";
 cin>>length;
 cout<<"Enter the breadth of the recatngle: ";
 cin>>breadth;
}
int rectangle::area()
{
    int a=length*breadth;
    return a;
}
void rectangle::displayArea()
{   int area=this->area();
    cout<<"The area of rectangle is: "<<area;
    cout<<endl;
}
int main()
{
    
    rectangle r(5,10);
    r.input();
    r.area();
    r.displayArea();
    return 0;

}