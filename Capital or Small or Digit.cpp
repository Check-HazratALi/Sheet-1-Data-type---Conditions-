#include<iostream>
using namespace std;

int main() 
{
    char x;
    cin>>x;
    if (x>='0' && x<='9')
    {
        cout<<"IS DIGIT";
    }
    else if (x>='A' && x<='Z')
    {
        cout<<"ALPHA"<<"\n"<<"IS CAPITAL";
    }
    else
    {
        cout<<"ALPHA"<<"\n"<<"IS SMALL";
    }
    return 0;
    
}