// use of pre and post incrementors and pre and post decrementors are displayed with example

#include <iostream>
using namespace std;

int main()
{
    int i = 1, j = 2, k;
    k = i + j + i++ + j++ + ++i + ++j;
    cout << i << " " << j << " " << k << endl;
    return 0;
};