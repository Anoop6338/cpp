// To find sum to n terms

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the last number ";
    cin>>num;

    int sum =0;
    for (int counter=1 ; counter<=num ; counter++ )
    {
        sum = sum+counter;
    }
    cout<<"Your sum is "<<sum<<endl;
    return 0;
};   