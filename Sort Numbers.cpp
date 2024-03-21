#include<iostream>
using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if (a<=b && a<=c)
    {
        cout<<a<<"\n";
        if (b<c)
        {
            cout<<b<<"\n";
            cout<<c<<"\n";
        }
        else if (c<b)
        {
            cout<<c<<"\n";
            cout<<b<<"\n";
        }
        else
        {
            cout<<b<<"\n";
            cout<<c<<"\n";
        }
        
    }
    else if (b<=a && b<=c)
    {
        cout<<b<<"\n";
        if (a<c)
        {
            cout<<a<<"\n";
            cout<<c<<"\n";
        }
        else if (c<a)
        {
            cout<<c<<"\n";
            cout<<a<<"\n";
        }
        else
        {
            cout<<a<<"\n";
            cout<<c<<"\n";
        }
        
    }
    else if (c<=a && c<=b)
    {
        cout<<c<<"\n";
        if (a<b)
        {
            cout<<a<<"\n";
            cout<<b<<"\n";
        }
        else if (b<a)
        {
            cout<<b<<"\n";
            cout<<a<<"\n";
        }
        else
        {
            cout<<a<<"\n";
            cout<<b<<"\n";
        }
        
    }
    else
    {
        cout<<a<<"\n";
        cout<<b<<"\n";
        cout<<c<<"\n";
    }
    cout<<"\n"<<a<<"\n";
    cout<<b<<"\n";
    cout<<c;

    return 0;

}