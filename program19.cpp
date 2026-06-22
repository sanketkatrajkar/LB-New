
/*

Accept the Nmber form user and Display the sumation of the non Factors in decreasing order. 

Input : 12
Ouput : 50 

*/

#include<iostream>
using namespace std;

int DisplayFactors(int No)
{
    int sum = 0;

    for(int i = No; i >= 1; i--)
    {
        if(No % i != 0)
        {
            sum += i;
        }
    }

    return sum;
}


int main()
{
    int No = 0;

    cout << "Enter the Number : " << endl;
    cin >> No;

    int ret =  DisplayFactors(No);

    cout << "Sum is : " << ret;

    return 0;
}