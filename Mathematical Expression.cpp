#include<iostream>
using namespace std;

int main()
{
    long long a,b,s;
    char op1,op2;
    cin>>a>>op1>>b>>op2>>s;

    switch (op1)
    {
    case '+':
        if ((a+b)==s)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<a+b;
        }
        break;
    case '-':
        if ((a-b)==s)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<a-b;
        }    
        break;
    case '*':
        if ((a*b)==s)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<a*b;
        }
        break;
    case '/':
        if ((a/b)==s)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<a/b;
        }
        break;
    
    default:
        break;
    }
}