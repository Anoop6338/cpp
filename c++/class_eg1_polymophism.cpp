
#include <iostream>
#include <list>
using namespace std;

class YtChannel{
private:
    string Name;
    
    int SubsCount;
    list<string> PublishedVideoTitles;

protected:
    string OwnerName;
    int ContentQuality;

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

    void CheckAnalytics(){
        if (ContentQuality < 5){
            cout<<Name<<" has bad quality content. "<<endl;
        }
        else{
            cout<<Name<<" has great content quality. "<<endl;
        }
    }

    YtChannel(string name, string ownername){
        Name = name;
        OwnerName = ownername;
        SubsCount = 0;
        ContentQuality = 0;
    }
};






//Derived class 1
class CookingYtChannel : public YtChannel{  //derived class
    
    
public:    
    CookingYtChannel(string name, string ownername):YtChannel(name,ownername){
    
    }
    void Practice(){
        cout<<OwnerName<<" is practicing cooking, learning new dishes..."<<endl;
        ContentQuality++;
    }
};



//Derived class 2
class SingingYtChannel : public YtChannel{  //derived class
    
    
public:    
    SingingYtChannel(string name, string ownername):YtChannel(name,ownername){
    
    }
    void Practice(){
        cout<<OwnerName<<" is taking singing classes, learning new songs..."<<endl;
        ContentQuality++;
    }
};






int main(){
     
    CookingYtChannel channel1("John's Kitchen","John");
    channel1.Practice();

    SingingYtChannel channel2("Rohan Sings","Rohan");
    channel2.Practice();
    channel2.Practice();
    channel2.Practice();
    channel2.Practice();
    channel2.Practice();
    channel2.Practice();
    channel1.CheckAnalytics();
    channel2.CheckAnalytics();


    return 0;
}