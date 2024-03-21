#include<iostream>
using namespace std;

int main()
{
    string fst_name1,last_name1,fst_name2,last_name2;
    cin>>fst_name1>>last_name1;
    cin>>fst_name2>>last_name2;
    if (last_name1==last_name2)
    {
        cout<<"ARE Brothers";
    }
    else
    {
        cout<<"NOT";
    }
    
    return 0;
}