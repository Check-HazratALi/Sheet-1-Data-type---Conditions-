#include<iostream>
using namespace std;

int main()
{
    long long N;
    int y,m,d,s;
    cin>>N;
    y=N/365;
    m=(N-(y*365))/30;
    d=(N-(y*365))-(m*30);

    cout<<y<<" "<<"years"<<"\n";
    cout<<m<<" "<<"months"<<"\n";
    cout<<d<<" "<<"days";

    return 0;
}