#include<iostream>
using namespace std;

int main()
{
    float a, m;
    cin>>a;
    int b=int(a);
    m=a-b;
    if (m>0)
    {
        cout<<"float"<<" "<<b<<" "<<m;
    }
    else
    {
        cout<<"int"<<" "<<b;
    }
    return 0;
    
}