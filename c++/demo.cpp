#include<iostream>
using namespace std;

int main()
{
    char arr[20];
    int n;
    cout<<"how many words you want to enter ";
    cin>>n;

    cout<<"enter your string ";
    cin>>arr;
    for (int i=0; i<n; i++)
    {
        for(int j = 48; j<58; j++)
        {
            if(arr[i]==char(j))
            {
                cout<<arr[i]<<endl;
            }
        }
    }
    return 0;
}