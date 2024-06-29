#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;


int main(){
    int a;
    cout<<"Enter a number : "<<endl;
    cin>>a;
    cout<<"Factorial of num is : "<<factorial(a);
    return 0;
}