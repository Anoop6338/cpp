#include <iostream>
using namespace std;

class employee
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
};

int main()
{
    employee emp1 = employee("anoop", "GNDU", 18);
    emp1.intro();

    employee emp2 = employee("JOHN", "amazon", 25);
    emp2.intro();

    emp1.setAge(15);
    cout << emp1.getName() << " is " << emp1.getAge() << " years old" << endl;

    return 0;
}