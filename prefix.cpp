#include<iostream>
#include<stack>
#include<string>
using namespace std;
int cal(int a,int b,char c);
int evaluatePrefix(string s,int l)
{
    stack<int> operands;
    int op1=0,op2=0,res=0;
    for(int i=l-1;i>=0;i--)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            operands.push(s[i]-'0');
        }
        else if( s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
        {
            op1=operands.top();
            operands.pop();
            op2=operands.top();
            operands.pop();
            res=cal(op1,op2,s[i]);
            operands.push(res);
        }//cout<<operands.top();
    }
    return operands.top();
}
int cal(int a,int b,char c)
{
    int result;
    if(c=='+')
        result=a+b;
    else if(c=='-')
        result=a-b;
    else if(c=='*')
        result=a*b;
    else if(c=='/')
        result=a/b;
    return result;
}
int main()
{
    string exp="+*+224/8*22";
    int x=evaluatePrefix(exp,exp.length());
    cout<<x<<endl;
}
