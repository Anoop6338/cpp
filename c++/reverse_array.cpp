#include<iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cout<<"Enter the numbers you want to enter :"<<endl;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cout<<"enter "<<i+1<<" no. "<<endl;
        cin >> arr[i];        
    }
    for (int j = N - 1; j >= 0; j--) {
        cout << arr[j] << " ";
    }
    return 0;
}