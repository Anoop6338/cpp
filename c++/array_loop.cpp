#include<iostream>
using namespace std;

int main(){
    int marks[]={23,45,54,94};
    cout<<"Using for loop"<<endl;
    for (int i=0; i<4;i++){
        cout<<"The marks of "<<i<<" is "<<marks[i]<<endl;
    }
    int i=0;
    cout<<"Using while loop"<<endl;
    while (i<4)
    {
        cout<<"The marks of "<<i<<" is "<<marks[i]<<endl;
        i++;
    }

    i=0;
    cout<<"Using do-while loop"<<endl;
    do
    {
        cout<<"The marks of "<<i<<" is "<<marks[i]<<endl;
        i++;
    } while (i<4);
    
    
    return 0;
}