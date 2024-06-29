// Write a code that input a number n and tell whether it is equal to, less than or more than 10\

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Input your number ";
    cin>>num;

    if (num<10){
        cout<<"Less than 10";
    }
    else if (num==10){
        cout<<"Equal to 10";
    }
    else{
        cout<<"More than 10";
    }
    
    return 0;
};