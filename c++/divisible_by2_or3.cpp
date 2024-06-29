// Write a program to output whether a number is divisible by both 2 and 3 or by only one of them or none of them.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number ";
    cin >> num;

    if (num % 2 == 0 && num % 3 == 0)
    {
        cout << "Divisible by both 2 and 3";
    }
    else if (num % 2 == 0)
    {
        cout << "Divisible by 2";
    }
    else if (num % 3 == 0)
    {
        cout << "Divisible by 3";
    }
    else
    {
        cout << "Not divisible by both";
    }

    return 0;
};