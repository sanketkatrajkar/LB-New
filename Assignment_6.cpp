
/*

1] Accept single Number form the user and display the word 

Input : 4 
Output : four

*/

#include<iostream>
using namespace std;

void Display(int No)
{
    if(No == 1)
    {
        cout << "one";
    }
    else if(No == 2)
    {
        cout << "two";
    }
    else if(No == 3)
    {
        cout << "three";
    }
    else
    {
        cout << "Invalide Number ";
    }

    cout << endl;
}



/*

2] Accept the number from user and find factorial of number

Input : 5
Output : 120 (5 * 4 * 3 * 2 * 1)

*/


void Factorial(int No)
{
    long fact = 1;

    while(No >= 1)
    {
        fact = fact * No;
        No--;
    }

    cout << "Factorila is : "<<fact << endl;
}

/*3] Accept the number from user and Display its table

Input : 5
Output : 5 10 15 20 25 30 35 40 45 50

*/

void Table(int No)
{
    for(int i = 1; i <= 10;i++)
    {
        cout << No * i << " ";
    }

    cout << endl;
    cout << "Reverse Table are : " << endl;

    for(int i = 10; i >= 1; i--)
    {
        cout << No * i << " ";
    }
}


int main()
{
    int No = 0;

    cout << "Enter the number : \n";
    cin >> No;

    Display(No);
    Factorial(No);
    Table(No);

    return 0;
}