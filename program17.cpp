
/*

Accept the Nmber form user and  Factors in decreasing order. 

Input : 12
Ouput : 6 4 3 2 1 

*/

#include<iostream>
using namespace std;

void DisplayFactors(int No)
{
    for(int i = No / 2; i >= 1; i--)
    {
        if(No % i == 0)
        {
            cout << i << " ";
        }
    }
}


int main()
{
    int No = 0;

    cout << "Enter the Number : " << endl;
    cin >> No;

    DisplayFactors(No);

    return 0;
}