

/*
Accept the characte from the user and conver that character 

Input : a Ouput : A

Input : s Ouput : S

*/

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c", ch - 32);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c", ch + 32);
    }
}


int main()
{
    char ch = '\0';

    printf("Enter the character that you want to Convert : \n");
    scanf(" %c", &ch);

    Display(ch);

    return 0;
}
