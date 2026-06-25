

/*
      Accept the number form user and cout the even digit of number 

      Input  : 9834
      Output : 2

      Input  : 4711
      Output : 1
*/

#include<iostream>
using namespace std;


int EvenDigitCount(int No)
{
    int count = 0;

    while(No != 0)
    {
        int digit = No % 10;

        if(digit % 2 == 0)
        {
            count++;
        }

        No = No / 10;
    }

    return count;
}

/*
      Accept the number form user and cout the odd digit of number 

      Input  : 9834
      Output : 2

      Input  : 4711
      Output : 3
*/

int OddDigitCount(int No)
{
    int count = 0;

    while(No != 0)
    {
        int digit = No % 10;

        if(digit % 2 != 0)
        {
            count++;
        }

        No = No / 10;
    }

    return count;
}


/*
      Accept the number form user and cout nmber in between 3 and 7

      Input  : 9834
      Output : 1

      Input  : 47115
      Output : 2
*/

int CountNo(int No)
{
    int count = 0;

    while(No != 0)
    {
        int digit = No % 10;

        if(digit > 3 &&  digit < 7 )
        {
            count++;
        }

        No = No / 10;
    }

    return count;
}

/*
      Accept the number form user and Multiplication of all digits 

      Input  : 123
      Output : 6

      Input  : 4711
      Output : 28
*/

int DigitMultiplication(int No)
{
    if(No == 0)
    {
        return 0;
    }
    
    int prod = 1;

    while(No != 0)
    {
        int digit = No % 10;
        prod = prod * digit;
        No = No / 10;
    }

    return prod;
}


int main()
{
    int No = 0 , ans = 0;
     
    cout << "Enter Number : \n";
    cin >> No;

    ans = EvenDigitCount(No);
    cout << "count is " << ans << endl;

    ans = OddDigitCount(No);
    cout << "Count is : "<< ans << endl;

    ans = CountNo(No);
    cout << "count is : " << ans << endl;

    ans = DigitMultiplication(No);
    cout << "Multiplication is : " << ans << endl;
    
    return 0;
}