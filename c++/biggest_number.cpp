//largest number of 3

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"1st number!! ";
    cin>>a;

    cout<<"2nd number!! ";
    cin>>b;

    cout<<"3rd number!! ";
    cin>>c;

    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
    else
    {
        if (b>c)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
        
    }
    return 0;
}