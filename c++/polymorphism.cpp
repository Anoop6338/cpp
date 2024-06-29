#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class employee : AbstractEmployee
{
private:
    string Company;
    int Age;

protected:
    string Name;

public:
    void setName(string name)
    { // setter
        Name = name;
    }
    string getName()
    { // getter
        return Name;
    }
    void setCompany(string company)
    { // setter
        Company = company;
    }
    string getCompany()
    { // getter
        return Company;
    }
    void setAge(int age)
    {
        if (age >= 18) // setter
            Age = age;
    }
    int getAge()
    { // getter
        return Age;
    }

    void intro()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion()
    {
        // any employee older than 30 will get promotion
        if (Age > 30)
        {
            cout << Name << " got promoted!!" << endl;
        }
        else
        {
            cout << Name << " , sorry no promotion for you!!" << endl;
        }
    }
    virtual void Work(){  /*This virtual word will tell the compiler to first check whether there is work function in the derived class 
                           if it exist then run that function
                           otherwise run this function in the parent class.*/
        cout<<Name<<" is checking email, task backlog, performing tasks...."<<endl;

    }

};


class developer : public employee
{ // inherited class of employee
public:
    string FavProgrammingLang;

    developer(string name, string company, int age, string favProgrammingLang) : employee(name, company, age)
    {
        FavProgrammingLang = favProgrammingLang;
    }
    void FixBug()
    {
        cout << Name << " fixed bug using " << FavProgrammingLang << endl;
    }
    void Work(){
        cout<<Name<<" is writting "<<FavProgrammingLang<<" code"<<endl;

    }
};

class teacher : public employee
{ // inherited class of employee
public:
    string Subject;
    void preparelesson()
    {
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }
    teacher(string name, string company, int age, string subject) : employee(name, company, age)
    {
        Subject = subject;
    }
    void Work(){
        cout<<Name<<" is teaching "<<Subject<<" subject"<<endl;

    }
};

int main()
{//The most common use of polymorphism is when a parent class refrence is used to refer to achild class object.

    developer d = developer("Sania", "Youtube", 26, "C++");
    teacher t = teacher("jack", "MPS", 35, "History");
    //d.Work();
    //t.Work();

    employee* e1 = &d;
    employee* e2 = &t; 

    e1 -> Work();
    e2 -> Work(); 

    return 0;
}