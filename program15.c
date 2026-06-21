


/*
   Check wheather character is vowel or not 
*/

#include<stdio.h>

void Display(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Character is vowel");
    }
    else
    {
        printf("Character in not vowel ");
    }
}


int main()
{
    char ch = '\0';

    printf("Enter the character  : \n");
    scanf(" %c", &ch);

    Display(ch);

    return 0;
}