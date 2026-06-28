

#include<iostream>
using namespace std;


/*
Accpet the Number from user return the differnce between the even and odd number 

Input : 6

      element : 85 66 3 80 93 88

Output : 53 (234 - 181)

*/

int SumationDiffernce(int *arr, int size)
{
    int evenSum = 0, oddSum = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenSum += arr[i];
        }
        else
        {
            oddSum += arr[i];
        }
    }

    return oddSum - evenSum;
}

/*
Accpet the Number from user Display the number are divisible by 3 and 5 

Input : 6

      element : 85 66 3 15 93 88

Output : 15

*/

void isDivisible(int arr[] , int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 3 == 0 && arr[i] % 5 == 0)
        {
            cout << arr[i] << " ";
        }
    }
}

/*
Accpet the Number from user Display multiple of 11

Input : 6

      element : 85 66 3 15 93 88

Output : 66 88

*/

void Display(int arr[] , int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 11 == 0)
        {
            cout<< arr[i] << " ";
        }
    }
}

int main()
{
    int size = 0;

    cout << "Enter the size of Element : \n";
    cin >> size;

    int *arr = new int[size];

    if(arr == NULL)
    {
        cout << "Enter the invalide size of Element";
        return -1;
    }

    cout << "Enter the Element of the Array : \n";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans = SumationDiffernce(arr, size);
    cout << "Differance is : " << ans << endl;

    isDivisible(arr, size);

    Display(arr, size);

    delete [] arr;


    return 0;
}