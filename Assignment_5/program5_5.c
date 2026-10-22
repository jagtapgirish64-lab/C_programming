/*
Identify Character Type
Problem Statement: Accept a single character and determine whether it is an uppercase alphabet, lowercase alphabet, digit, or special character. Use character comparisons without using library character-classification
functions.
Expected Output:
Input: A- Uppercase Alphabet
Input: m - Lowercase Alphabet
Input: 7-+Digit
Input: @ - Special Character
*/


////////////////////////////////////////////////////
//
//  Function Name: Identify Character
//  Description  : checking the Identify Character from a user which the charcter is in digits , uppeecase, lowercase or special charcter
//  Input        : int,chat
//  output       : char
//  Author       : Girish Jagtap
//  Date         : 22/10/2026
/////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
