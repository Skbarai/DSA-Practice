#include<iostream>
#include<stack>
#include<cctype>
using namespace std;
int postfixevaluation(stack<int> &s,string str)
{
    int i=0;
    int x1,x2,result;
    for(i=0;i<str.length();i++)
    {
        if(isdigit(str[i]))
        {
          s.push(str[i]-'0');
        }
        else
        {
           x2=s.top();
           s.pop();
           x1=s.top();
           s.pop();
           switch (str[i])
           {
            case '+':
            result=x1+x2;
            break;
            case '-':
            result=x1-x2;
            break;
            case '*':
            result=x1*x2;
            break;
            case '/':
            result=x1/x2;
            break;
           }
           s.push(result);
        }
    }
    return s.top();

}
int main()
{
    stack<int> s;
    string str;
    cout<<"Enter the postfix expression: ";
    getline(cin,str);
    cout<<postfixevaluation(s,str);
}