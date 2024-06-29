// Print number which is not divisible by any num

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter number whose multiple should not be there ";
    cin>>num;

    for (int counter=0; counter<100; counter++)
    {
        if (counter%num==0)
        {
            continue;
        }
        else
        {
            cout<<counter<<endl;

        }
       
    }
     return 0;
};