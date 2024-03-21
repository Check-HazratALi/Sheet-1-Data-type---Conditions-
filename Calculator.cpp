#include<iostream>
using namespace std;

int main()
{
    long long a,b;
    char s;
    cin>>a>>s>>b;
    switch (s)
    {
    case '+':
        cout<<a<<"+"<<b<<"="<<a+b;
        break;
    case '-':
        cout<<a<<"-"<<b<<"="<<a+b;
        break;
    case '*':
        cout<<a<<"*"<<b<<"="<<a+b;
        break;
    case '/':
        cout<<a<<"/"<<b<<"="<<a+b;
        break;
    default:
        cout<<"operator is not curret";
        break;
    }
    return 0;

}