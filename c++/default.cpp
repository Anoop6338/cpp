#include<iostream>
using namespace std;

float moneyRecieved(int currentMoney, float factor =1.04){
    return currentMoney*factor;
}

int main(){
    int money = 10000;
    cout<<"Current money in bank "<<money<<endl;
    cout<<"Balance after 1 year :"<<moneyRecieved(money)<<endl;
    cout<<"Balance after 1 year for VIP :"<<moneyRecieved(money,1.1);
    return 0;
}