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
};

int main()
{

    developer d = developer("Sania", "Youtube", 26, "C++");

    d.FixBug();
    d.AskForPromotion();

    teacher t = teacher("jack", "MPS", 35, "History");
    t.preparelesson();
    t.AskForPromotion();

    return 0;
}