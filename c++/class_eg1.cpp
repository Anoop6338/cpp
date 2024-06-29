#include<iostream>
#include<list>
using namespace std;

class YtChannel {
public:    
    string Name;
    string OwnerName;
    int SubsCount;
    list<string> PublishedVideoTitles;
};

int main(){
    
    YtChannel channel1;
    channel1.Name = "CodeBeauty";
    channel1.OwnerName = "Saldina";
    channel1.SubsCount = 1000;
    channel1.PublishedVideoTitles = {"C++ for beg video 1","Html &css video 1","C++ OOP Video 1"};
    int i = channel1.PublishedVideoTitles.size();

    cout<<"Channel Name : "<<channel1.Name<<endl;
    cout<<"OwnerName : "<<channel1.OwnerName<<endl;
    cout<<"Subscriber Count : "<<channel1.SubsCount<<endl;
    cout<<"Videos : "<<i<<endl;
    for(string Titles: channel1.PublishedVideoTitles){
        cout<<Titles<<endl;
    }
    cout<<endl;

     YtChannel channel2;
    channel2.Name = "RavalSings";
    channel2.OwnerName = "Dharshan Raval";
    channel2.SubsCount = 1000;
    channel2.PublishedVideoTitles = {"Tera Zikar","Dholida","Tere aakhon mai dikhta jo pyaar mughe"};
    int j = channel2.PublishedVideoTitles.size();

    cout<<"Channel Name : "<<channel2.Name<<endl;
    cout<<"OwnerName : "<<channel2.OwnerName<<endl;
    cout<<"Subscriber Count : "<<channel2.SubsCount<<endl;
    cout<<"Videos : "<<j<<endl;
    for(string Titles: channel2.PublishedVideoTitles){
        cout<<Titles<<endl;
    }

    return 0;
}