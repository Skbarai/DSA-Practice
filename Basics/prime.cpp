#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int count=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
        cout<<"Not a Prime\n";
        count=1;
         break;
        }
    }
    if(count==0 && n>1)
    cout<<"prime\n";
}