#include<iostream>
using namespace std;

typedef struct employee
    {   
        int eId;
        char favChar;
        float salary;
    }ep;
    

int main(){
    ep harry;
    harry.eId = 1;
    harry.favChar='c';
    harry.salary=12000;

    cout<<"The Id is "<<harry.eId<<endl;
    cout<<"The salary is "<<harry.salary<<endl;
    cout<<"The favChar is "<<harry.favChar<<endl;

    return 0;
}