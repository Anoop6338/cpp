
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

class CookingYtChannel : public YtChannel{  //derived class
    
    //making of a constructor for CookingYtChannel
public:    
    CookingYtChannel(string name, string ownername):YtChannel(name,ownername){
    
    }
    void Practice(){
        //You can access a private member in a derived class.
        //You need to first convert that member to a protected one.
        cout<<OwnerName<<" is practicing cooking, learning new dishes"<<endl;
    }
};
int main(){
    CookingYtChannel channel1("Raval's Kitchen","Dharshan Raval");
    channel1.PublishVideo("Apple pie");
    channel1.PublishVideo("Choclate cake");
    channel1.Subscribe();
    channel1.Subscribe();
    
    channel1.GetInfo();
    channel1.Practice();
    

    CookingYtChannel channel2("John's Kitchen","John");
    channel2.Practice();

    return 0;
}