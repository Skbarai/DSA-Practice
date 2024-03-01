#include <iostream>
#include <stack>
#include <string>
#include<cctype>
using namespace std;
bool isOperator(char x)
{
  if (x == '+' || x == '-' || x == '*' || x == '/')
    return true;
  else
    return false;
}
int precedence(char x)
{
  if (x == '+' || x == '-')
    return 1;
  else if (x == '*' || x == '/')
    return 2;

  return 0;
}
string intopo(stack<char> &s, string &str)
{
    string postfix = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (isalnum(str[i])) //checks whether the character is alphanumeric or not
        {
            postfix += str[i];
        }
        else if (str[i] == '(')
        {
            s.push(str[i]);
        }
        else if (str[i] == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // to pop remaining '('
        }
        else if (isOperator(str[i]))
        {
            while (!s.empty() && (precedence(s.top()) >= precedence(str[i])))
            {
                postfix += s.top();
                s.pop();
            }
            s.push(str[i]);
        }
    }
    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main()
{
  stack<char> s;
  string str;
  cout << "Enter string in infix manner: ";
  getline(cin, str);
  string postfix = intopo(s, str);
  cout << postfix;
}