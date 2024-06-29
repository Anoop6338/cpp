// Neha goes to market every odd days and spends 300 rupees whenever she goes out.
// Make a program that tells neha whether its an odd day and how much money she has left in her wallet.
// Input monthly pocket money from user

#include <iostream>
using namespace std;

int main()
{
    int total;
    cout<<"Enter total money "<<endl;
    cin>>total;
    cout<<"Total money = "<<total<<endl;

    for (int date=1; date<=31; date++)
    {
        if (date%2==0)
        {
            continue;
        }
    if (total==0)
    {
        break;
    }
   
    total = total-300;
    cout<<"Go out today! "<<date<<" left money = "<<total<<endl;

    }
    return 0;
};