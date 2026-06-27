



#include<iostream>
using namespace std;


/*

Accept the number form user and display the digit of in revese order

INput : 2359
Output : 9 
         5 
         3 
         2
*/

void ReversDigit(int No)
{
     while(No != 0)
     {
        int digit = No % 10;
        cout << digit << " ";
        No = No / 10;
     }

     cout << endl;
}


/*

Accept the number form user and display the digit of in revese order

INput : 2359
Output : No zero 

Input : 1203
Output : it is zero
*/

void CheckZero(int No)
{
     while(No != 0)
     {
        int digit = No % 10;

        if(digit == 0)
        {
            cout << "It is zero";
        }

        No = No / 10;
     }

     cout <<  "No zero";

     cout << endl;
}

int CoutTwo(int No)
{
    int count = 0;

    while(No != 0)
    {
        int digit = No % 10;

        if(digit == 2 )
        {
            count++;
        }

        No = No / 10;
    }

    return count;
}

int main()
{
    int No1 = 0; 

    cout << "Enter fist Number : \n";
    cin >> No1;

    ReversDigit(No1);

    CheckZero(No1);

    int ans = CoutTwo(No1);

    cout << ans << endl;

    return 0;
}