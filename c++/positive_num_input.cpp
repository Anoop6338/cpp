//Take inputs from the user till he gives a negative input

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number";
    cin>>num;

    while (num>0)
    {
        cout<<num<<endl;
        cout<<"Enter next number";
        cin>>num;


    }
    cout<<"You entered a negative number!!";
    return 0;
}