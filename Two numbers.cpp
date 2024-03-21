#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a,b;
    double devide;
    cin>>a>>b;
    devide=a/b;
    cout<<"floor" " " << int(a)<<" " "/" " "<<int(b) <<" " "=" " "<<floor(devide)<<"\n";
    cout<<"ceiling" " " << int(a)<<" " "/" " "<<int(b) <<" " "=" " "<<ceil(devide)<<"\n";
    cout<<"round" " " << int(a)<< " " "/" " "<<int(b) <<" " "=" " "<<round(devide)<<"\n";


    return 0;
}