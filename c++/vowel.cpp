//Write a code to tell whether the alphabet is a vowel or consonants

#include <iostream>
using namespace std;

int main()
{
    char word;
    cout<<"Enter your alphabet ";
    cin>>word;

    switch(word)
    {
        case 'a':
            cout <<"It's a vowel"<<endl;
            break;

        case 'e':
            cout <<"It's a vowel"<<endl;
            break;

        case 'i':
            cout <<"It's a vowel"<<endl;
            break;

        case 'o':
            cout <<"It's a vowel"<<endl;
            break;

        case 'u':
            cout <<"It's a vowel"<<endl;
            break;

        default:
            cout <<"It's a consonents"<<endl;
            break;
    }

    return 0;
};