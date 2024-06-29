#include<iostream>
using namespace std;

int fabonacci(int n){
    if (n<2){
        //cout <<"1";
        return 1 ;
        
    }
    //cout<<n<<" + ";
    return fabonacci(n-2) + fabonacci(n-1);
}

int main(){
    int a;
    cout<<"Enter a number : "<<endl;
    cin>>a;
    //cout<<"Fabonacci series is : ";
    cout<<"The term in Fabonacci series at position "<<a<<" is : "<<fabonacci(a)<<endl;
    return 0;
}