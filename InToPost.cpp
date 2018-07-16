#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isoperator(char c);
bool isoperand(char c);
bool highprec(char a,char b);
bool openingParentheses(char c);
bool closingParentheses(char c);
string InToPost(string exp);




int main()
{
    string infix;
//    infix="a*(b+c)";
//    infix="(A + B)*(C - D ) ";
    cin>>infix;
//    cout<<infix<<endl;
    string result=InToPost(infix);
    cout<<result<<endl;
    return 0;

}




bool isoperator(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
        return true;
    else
        return false;
}
bool isoperand(char c)
{
    if((c>='0'&&c<='9')||(c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        return true;
    else return false;
}
bool highprec(char a,char b)
{
    if(a=='/')
        return true;
    else if(a=='*')
    {
        if(b=='/')
            return false;
        else return true;
    }
    else if(a=='+'&&b=='-')
    {
        return true;
    }
    else
        return false;
}
string InToPost(string exp)
{
    stack<char> s;
    string postfix="";
    for(int i=0;i<exp.length();i++)
    {
        if(isoperand(exp[i]))
            postfix+=exp[i];
        else if(isoperator(exp[i]))
        {
            while(!s.empty()&&highprec(s.top(),exp[i])&&!openingParentheses(s.top()))
            {
                postfix+=s.top();
                s.pop();
            }
            s.push(exp[i]);

        }
        else if(openingParentheses(exp[i]))
            s.push(exp[i]);
        else if(closingParentheses(exp[i]))
        {
            while(!s.empty()&&!openingParentheses(s.top()))
            {
                postfix+=s.top();
                s.pop();
            }
        }
    }
    while(!s.empty())
    {
        if(!openingParentheses(s.top()))
           postfix+=s.top();
        s.pop();
    }
    return postfix;
}

bool openingParentheses(char c)
{
    if(c=='('||c=='{'||c=='[')
        return true;
    else return false;
}

bool closingParentheses(char c)
{
    if(c==')'||c=='}'||c==']')
        return true;
    else
        return false;
}
