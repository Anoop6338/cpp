#include<iostream>
using namespace std;
//pointers arithemetic

int main(){
    int marks[]={23,45,67,89};
    int* p=marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *p+1 is "<<*(p+1)<<endl;
    cout<<"The value of *p+2 is "<<*(p+2)<<endl;
    cout<<"The value of *p+3 is "<<*(p+3)<<endl;
    return 0;
}