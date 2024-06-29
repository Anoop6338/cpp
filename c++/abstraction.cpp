#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class employee : AbstractEmployee
{
private:
    string Name;
    string Company;
    int Age;

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

int main()
{
    employee emp1 = employee("Anoop", "GNDU", 18);
    // emp1.intro();

    employee emp2 = employee("JOHN", "amazon", 35);
    // emp2.intro();

    // emp1.setAge(35);
    // cout<<emp1.getName()<<" is "<<emp1.getAge()<<" years old"<<endl;

    emp1.AskForPromotion();
    emp2.AskForPromotion();

    return 0;
}