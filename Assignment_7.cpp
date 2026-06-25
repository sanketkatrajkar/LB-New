

#include<iostream>
using namespace std;

/*

  Accept the N number  from user and display Pattern
  
  Input : 4    
  Output : * * * * # # # #

  // Time complexity : O(n + m) = O(N) 

*/

void Display(int No)
{
    for(int i = 1; i <= No; i++)
    {
        cout << " * ";
    }

    for(int i = 1; i <= No; i++)
    {
        cout << " # ";
    }

     cout << endl;
}

/*

  Accept the N number  from user and display Even factorial of N
  
  Input : 5    
  Output : 8 (2 * 4)

  // Time complexity : 

*/

void EvenFactorial(int No)
{
    int fact = 1;

    while(No >= 1)
    {
        if(No % 2 == 0)
        {
            fact = fact * No;
        }

        No--;
    }

    cout << fact << endl;
}



int main()
{
    int No = 0;

    cout << "Enter the number : " << endl;
    cin >> No;

    Display(No);
    EvenFactorial(No);

    return 0;
}