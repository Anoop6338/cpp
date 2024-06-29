//simple calc using switch

#include <iostream>
using namespace std;

int main()
{
    float n1,n2;
    cout<<"Input first number ";
    cin>>n1;

    char op;
    cout<<"Input character ";
    cin>>op;

    cout<<"Input second number ";
    cin>>n2;

    switch(op)
    {
        case '+':
            cout<<n1+n2<<endl;
            break;

        case '-':
            cout<<n1-n2<<endl;
            break;

         case '*':
            cout<<n1*n2<<endl;
            break;
        
         case '/':
            cout<<n1/n2<<endl;
            break;

        default:
            cout<<"Operand not found";
            break;
    }

    return 0;
};