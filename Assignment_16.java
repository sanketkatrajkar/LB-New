

/*
Accpet the Number from user and find the maximum element of array 

Input : 6

element : 85 66 3 16 93 88

Output : 93


*/

import java.util.*;

class MaximumX
{
    public static int Maximum(int arr[], int size)
    {
        int max = 0;
    
        for(int i = 0; i < size; i++)    
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
    
        return max;
    }
}

/*
Accpet the Number from user and Display 3 digit number

Input : 6

element : 854 665 3 164 93 88

Output : 854 665 164

*/

class ThreeDigit
{
    public static void threeDigit(int arr[], int size)
    {
        for(int i = 0; i < size; i++)
        {
           int count = 0;
           int No = arr[i];

           while(No != 0)
           {
              int digit = No % 10;
              count++;
              No = No / 10;
           }

           if(count == 3)
           {
              System.out.print(arr[i] + " ");
           }
        }
    }
}

/*
Accpet the Number from user and sum of digit 

Input : 6

element : 44 12 2 456 

Output : 8 3 2 16

*/

class SummationDigit
{
    public static void sumDigit(int arr[], int size)
    {
        for(int i = 0; i < arr.length; i++)
        {
            int No = arr[i];
            int sum = 0;

            while(No != 0) 
            {
               int digit = No % 10;
               sum += digit;
               No = No / 10;
            }

            System.out.print(sum + " ");
        }
    }
}

public class Assignment_16
{
    
    public static void main(String a[])
    {
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of Array :");
        int size = sobj.nextInt();
        
        int arr[] = new int[size];

        System.out.println("Enter element of array : ");
        for(int i = 0; i < size; i++)
        {
            arr[i] = sobj.nextInt();
        }

        int ans = MaximumX.Maximum(arr, size);
        System.out.println("Maximum element is : "+ ans);

        ThreeDigit.threeDigit(arr, size);
        SummationDigit.sumDigit(arr, size);
    }
}