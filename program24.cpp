



/*

  Accept the number from user and display odd numbers.
  
  Input : 15
  Output : 1 3 5 7 9 11 13 15

*/

#include<iostream>
using namespace std;

void Display(int No)
{
    for(int i = 1; i <= No; i++)
    {
        if(i % 2 != 0)
        {
            cout << i << " ";
        }
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