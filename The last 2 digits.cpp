#include<iostream>
using namespace std;

int main()
{
    long long a,b,c,d,m;
    cin>>a>>b>>c>>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    m=(a*b*c*d)%100;
    if (m<10)
    {
        cout<<0<<m;
    }
    else
    {
        cout<<m;
    }
    return 0;

}