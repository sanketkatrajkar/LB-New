



/*

  Accept the number from user and display Numbers Line 
  
  Input : 4
  Output : -4 -3 -2 -1 0 1 2 3 4

*/

#include<iostream>
using namespace std;

void Display(int No)
{
    for(int i = -No; i <= No; i++)
    {
        cout << i << " ";
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