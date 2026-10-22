// Accept one character from user and convert case of that character
// input:a      output:A
// input:D      output:d


#include<stdio.h>

//////////////////////////////////////////////////////
//
//  Function Name: convert case
//  Description  : Accept one character from user and covert it into captial to small or small to captial
//  Input        : char
//  output       : char
//  Author       : Girish Jagtap
//  Date         : 20/10/2026
/////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character:\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}

