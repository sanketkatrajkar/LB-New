




/*

  Accept the N number  from user and display first 5 multiple of this N number..
  
  Input : 4    
  Output : 4 8 12 16 20

*/

#include<iostream>
using namespace std;

void Display(int No)
{
    for(int i = 1; i <= 5; i++)
    {
        cout << i * No << " ";
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