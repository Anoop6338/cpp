//https://technorj.com/basic-data-types-in-c-hacker-rank-solution-hackerrank-programming-solutions-hackerrank-c-solutions/#:~:text=To%20print%20a%20data%20type,lf%22%2C%20ch%2C%20d)%3B
//Hackerrank ques number2

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int num;
    cin>>num;
    cout<<num<<endl;
    
    long long int num2;
    cin>>num2;
    cout<<num2<<endl;
    
    char num3;
    cin>>num3;
    cout<<num3<<endl;
    
    float num4;
    cin>>num4;
    cout<<fixed<<setprecision(3)<<num4<<endl;
    
    double num5;
    cin>>num5;
    cout<<fixed<<setprecision(9)<<num5<<endl;
    
    return 0;
}