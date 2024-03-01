#include <iostream>
using namespace std;
int com(int n, int r)
{
    if (r == 0||r==n)
    return 1;
    else
    return (com(n-1,r-1)+com(n-1,r));

}
int main()
{
    int x,y;
    cout<<"Enter value of n & r: ";
    cin>>x>>y;
    cout<<endl<<com(x,y)<<endl;
    return 0;
}