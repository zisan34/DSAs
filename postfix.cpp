#include<iostream>
#include<stack>
#include<string>
using namespace std;
int cal(int a,int b,char c);
int evaluatePostfix(string s, int l)
{
    stack<int> p;
    int op1=0,op2=0,result=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]>='0'&& s[i]<='9')
        {
            p.push(s[i]-'0');
        }
        else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
        {
            op2=p.top();
            p.pop();
            op1=p.top();
            p.pop();
            result=cal(op1,op2,s[i]);
            p.push(result);

        }
    }
    return p.top();
}
int cal(int a,int b,char c)
{
    int d;
    if(c=='+')
        d=a+b;
    else if(c=='-')
        d=a-b;
    else if(c=='*')
        d=a*b;
    else if(d=='/')
        d=a/b;
    return d;
}


int main()
{
    string postf="2 3 * 5 4 * + 9 -";
    int sum=evaluatePostfix(postf,postf.length());
    cout<<sum<<endl;
}
