#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s,int l)
{
    stack<char> p;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            p.push(s[i]);
        else if(s[i]==')'||s[i]=='}'||s[i]==']')
            {
                if(p.empty())return false;
                if(s[i]==')'&&p.top()=='(')
                    p.pop();
                else if(s[i]=='}'&&p.top()=='{')
                    p.pop();
                else if(s[i]==']'&&p.top()=='[')
                    p.pop();
                else
                    return false;

            }
    }
    return true;
}
int main()
{
    string s="[]";
    cout<<isValid(s,s.length());
}
