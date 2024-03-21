#include<iostream>
using namespace std;

int main()
{
    double pie,r,area;
    pie= 3.141592653;
    cin >>r;
    area=pie*r*r;
    cout.precision(9);
    cout<<fixed<<area;
    return 0;
}