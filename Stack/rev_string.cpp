#include<iostream>
#include<stack>
#include<string>
using namespace std;
string revString(stack<char> &s,string &str)
{
    string reversed="";
  for(int i=0;i<str.length();i++)
  s.push(str[i]);
  while(!s.empty())
  {
    reversed+=s.top();
    s.pop();
  }
  return reversed;
}
int  main()
{
    stack<char> s;
    string st;
    cout<<"Enter the string: ";
    getline(cin,st);
   string reversed = revString(s,st);
   cout<<reversed<<endl;

}