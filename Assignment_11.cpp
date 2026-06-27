




#include<iostream>
using namespace std;


/*
   Accept two number from the user and display the range of this number :

   Input : 1 3
   Output : 1 2 3


*/

void Display(int No1 , int No2)
{
    for(int i = No1; i <= No2; i++)
    {
        cout << i << " ";
    }

    cout << endl;

    for(int i = No2; i >= No1; i--)
    {
        cout << i << " ";
    }

    cout << endl;
}

/*
   Accept two number from the user and display even number between then  range :

   Input : 1 3
   Output : 2


*/

void DisplayEvenRange(int No1 , int No2)
{
    int sum = 0;

    for(int i = No1; i <= No2; i++)
    {
        sum = sum + i;

        if(i % 2 == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    cout << "Addition is : "<< sum << endl;

    cout << endl;
   
}

int main()
{
    int No1 = 0; 
    int No2 = 0;

    cout << "Enter fist Number : \n";
    cin >> No1;

    cout << "Enter second number : \n";
    cin >> No2;

    Display(No1, No2);

    DisplayEvenRange(No1, No2);

    return 0;
}