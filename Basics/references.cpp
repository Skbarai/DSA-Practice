#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int &b =a; //creating reference of variable 'a' and assigning it to b.
    int c=15;
    b=c;
    //int &b=c;//error: redeclaration of 'b'. We can not declare the same name again in
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;

}