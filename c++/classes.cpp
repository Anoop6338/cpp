#include<iostream>
using namespace std;


class employee{
    public:
    string Name;
    string Company;
    int Age;

    void intro(){
        cout<<"Name - "<<Name<<endl;
        cout<<"Company - "<<Company<<endl;
        cout<<"Age - "<<Age<<endl;
    }
//private: a constructor can't be in private because the object can't be created if the constructor is private.
    // constructor being created
    employee(string name, string company, int age){
         Name = name;
         Company = company;
         Age = age;
    }
};

// whenever you make a constructor you loose default constructor.
//then tou can either have your own default constructor or by providing the agruements in the constructor.
int main(){
    employee emp1 = employee("anoop" , "GNDU" , 18);        //either this line or the below ones
    //employee emp1;
    // emp1.name = "Anoop";
    // emp1.age = 18;
    // emp1.company = "GNDU";
    emp1.intro();

    employee emp2 = employee("JOHN" , "amazon" , 25);       // either this line or the below ones
    //employee emp2;                                    
    // emp2.name = "John";
    // emp2.age = 25;
    // emp2.company = "amazon";
    emp2.intro();

    return 0;
}