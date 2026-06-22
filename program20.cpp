
/*

Accept the Nmber form user and Display the sumation of the non Factors in decreasing order. 

Input : 12
Ouput : 34 (50 - 16)

*/

#include<iostream>
using namespace std;

int DisplayFactors(int No)
{
    int nonFactsum = 0, Factsum = 0;

    for(int i = 1; i < No; i++)
    {
        if(No % i != 0)
        {
            nonFactsum += i;
        }
        else
        {
            Factsum += i;
        }
    }

    return nonFactsum - Factsum;
}


int main()
{
    int No = 0;

    cout << "Enter the Number : " << endl;
    cin >> No;

    int ret =  DisplayFactors(No);

    cout << "Difference is : " << ret;

    return 0;
}