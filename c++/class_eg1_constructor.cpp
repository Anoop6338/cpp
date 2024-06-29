#include<iostream>
#include<list>
using namespace std;

class YtChannel{
public:
    string Name;
    string OwnerName;
    int SubsCount;
    list<string> PublishedVideoTitles;

    YtChannel (string name, string ownername){
        Name = name;
        OwnerName = ownername;
        SubsCount = 0;
    }

    void GetInfo(){
        cout<<"\nChannel Name : "<<Name<<endl;
        cout<<"Owner Name : "<<OwnerName<<endl;
        cout<<"SubsCount : "<<SubsCount<<endl;
        int i = PublishedVideoTitles.size();

        cout<<"Videos : "<<i<<endl;
        for(string VideoTitles:PublishedVideoTitles){
            cout<<VideoTitles<<endl;
        }
        
    }

};

int main(){
    YtChannel channel1("Code Beauty", "Saldina");
    channel1.PublishedVideoTitles.push_back("C++ for beginners");
    channel1.PublishedVideoTitles.push_back("HTML & CSS for beginners");
    channel1.PublishedVideoTitles.push_back("C++ & OOPS");

    YtChannel channel2("RavalSings", "Dharshan Raval");
    channel2.PublishedVideoTitles.push_back("Tera Zikr");
    channel2.PublishedVideoTitles.push_back("Dolida");
    channel2.PublishedVideoTitles.push_back("Teri aakhon mai dikhta jo pyaar mughe");


    channel1.GetInfo();
    channel2.GetInfo();





    
    
    return 0;
}