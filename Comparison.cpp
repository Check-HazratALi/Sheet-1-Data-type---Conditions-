#include<iostream>
using namespace std;

int main()
{
    long long a,b;
    char op;
    cin>>a>>op>>b;
    switch (op)
    {
    case '>':
        if (a>b)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        }      
        break;
    case '<':
        if (a<b)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        } 
        break;
    case '=':
        if (a=b)
        {
            cout<<"Right";
        }
        else
        {
            cout<<"Wrong";
        } 
        break;
    default:
        break;
    }
    return 0;
}