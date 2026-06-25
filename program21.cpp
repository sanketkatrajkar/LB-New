

/*

  Accept the number from user and display the this pattern
  
  Input : 3
  Output :  & * & * & *

*/

#include<iostream>
using namespace std;

void Display(int No)
{
    while(No >= 1)
    {
        cout << " &  * ";
        No--;
    }
}

int main()
{
    int No = 0;

    cout << "Enter the number : " << endl;
    cin >> No;

    Display(No);

    return 0;
}