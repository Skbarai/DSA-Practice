#include<iostream>
#include<string>
#include<stack>
using namespace std;
void check_paranthesis(stack<char> &s ,string st)
{
    for(int i=0;i<st.length();i++)
    {
        if(st[i]=='{'||st[i]=='['||st[i]=='(')
        s.push(st[i]);
        else
        {
            if((s.top()=='{' && st[i]=='}') || (s.top()=='[' && st[i]==']') ||(s.top()=='(' && st[i]==')'))
            s.pop();
        }
    }
    if(!s.empty())
    cout<<"Unbalanced"<<endl;
    else
    cout<<"Balanced"<<endl;
}


int main()
{
    stack<char> s;
    string st="{([{}])+a";
    check_paranthesis(s,st);

}