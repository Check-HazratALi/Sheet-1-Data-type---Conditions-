#include<iostream>
using namespace std;

int main()
{
    char c;
    cin>>c;
    if (c>='a' && c<='z')
        c=c-32;
    else
        c=c+32;
    cout<<c;

    return 0;
    
    
}