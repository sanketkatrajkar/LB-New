


/*

  Accept the number from user and display Numbers 
  
  Input : 6
  Output : 1 2 3 4 5 6

*/

#include<iostream>
using namespace std;

void Display(int No)
{
    while(No >= 1)
    {
       cout << No << " ";
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