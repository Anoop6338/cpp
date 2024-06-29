/*
In normal terms Encapsulation is defined as wrapping up of data and information under a single unit.
In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulates them.
Consider a real life example of encapsulation, in a company there are different sections like the accounts section, finance section, sales section etc.
Now there may arise a situation when for some reason an official from finance section needs all the data about sales in a particular month.
In this case, he is not allowed to directly access the data of sales section. He will first have to contact some other officer
in the sales section and then request him to give the particular data.
This is what encapsulation is. Here the data of sales section and the employees that can manipulate them are wrapped under a single name “sales section”.

We can not access any function from class directly. We need an object to access that function which is using the member the variable of that class.
The function which we are making inside the class ,it must use the all member variable then only it is called encapsulation.

If we  don’t  make function inside the class which is using the member  variable of the class then we don’t call it encapsulation.  */

// https://www.geeksforgeeks.org/encapsulation-in-c/
#include <iostream>
#include <list>
using namespace std;

class YtChannel{
private:
    string Name;
    string OwnerName;
    int SubsCount;
    list<string> PublishedVideoTitles;

public:
    void setName(string a1){
        Name = a1;
    }
    string getName(string a1){
        return Name;
    }

    void setOwnerName(string a2){
        OwnerName = a2;
    }
    string getOwnerName(string a2){
        return OwnerName;
    }

    void GetInfo(){
        cout << "\nChannel Name : " << Name << endl;
        cout << "Owner Name : " << OwnerName << endl;
        cout << "SubsCount : " << SubsCount << endl;
        int i = PublishedVideoTitles.size();

        cout << "Videos : " << i << endl;
        for (string VideoTitles : PublishedVideoTitles){
            cout << VideoTitles << endl;
        }
    }

    void Subscribe(){
        SubsCount++;
    }
    void Unsubscribe(){
        if (SubsCount > 0){
            SubsCount--;
        }
    }
    void PublishVideo(string Titiles){
        PublishedVideoTitles.push_back(Titiles);
    }

    YtChannel(string name, string ownername){
        Name = name;
        OwnerName = ownername;
        SubsCount = 0;
    }
};

int main(){
    YtChannel channel1("Code Beauty", "Saldina");
    channel1.setName("Beauty Code"); // The setName function changes the channel name.
    channel1.PublishVideo("C++ for beginners");
    channel1.PublishVideo("HTML & CSS for beginners");
    channel1.PublishVideo("C++ & OOPS");
    channel1.Subscribe();   // These subscribe and unsubscirbe functions are called to both
    channel1.Unsubscribe(); // increase and decrease the sub count in a program
    channel1.Subscribe();
    channel1.Subscribe();

    YtChannel channel2("RavalSings", "Dharshan Raval");
    channel2.PublishVideo("Tera Zikr");
    channel2.PublishVideo("Dolida");
    channel2.PublishVideo("Teri aakhon mai dikhta jo pyaar mughe");
    channel2.Subscribe();
    channel2.Subscribe();
    channel2.Subscribe();
    channel2.Unsubscribe();
    channel2.Subscribe();
    channel2.Subscribe();

    channel1.GetInfo();
    channel2.GetInfo();

    return 0;
}