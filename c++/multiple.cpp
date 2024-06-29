//Write a code to print multiples of a number using do while while taking the number and max multiple from the user.



#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter your number : ";
    cin>>num;

    int a =0;
    int max;
    cout<<"enter max number of multiple : ";
    cin>>max;
    do
    {
        int result = num*a;
        cout<<a<<" * "<<num<<" = "<<result<<endl;
        a++;
    } while (a<=max);
    return 0;
    
}