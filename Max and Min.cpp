#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if (a<=b && a<=c)
        cout<<a;
    else if (b<=a && b<=c)
        cout<<b;
    else if (c<=a && c<=b)
        cout<<c;
    else
        cout<<a;
    cout<<" ";
    if (a>=b && a>=c)
        cout<<a;
    else if (b>=a && b>=c)
        cout<<b;
    else if (c>=a && c>=b)
        cout<<c;
    else
        cout<<a;

    return 0;
}