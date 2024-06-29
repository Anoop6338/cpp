#include<iostream>
using namespace std;

//function prototype
//syntax type func-name(arguements);
//int sum(int a, int b); //--> Acceptable
//int sum(int a, b); //--> Not acceptable
int sum(int,int); //-->Acceptable

int main(){
    int num1, num2;
    cout<<"Enter first number : "<<endl;
    cin>>num1;
    cout<<"Enter second number : "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"Sum is "<<sum(num1,num2);
    return 0;
}
int sum(int a, int b){
    //Formal Parameters a and b will be taking from actual parameters num1 and num2
    int c =a+b;
    return c;
}