/*
 Check Divisibility by 5
Problem Statement: Accept an integer and determine whether it is divisible by 5 without leaving any remainder.
Expected Output:
 Input: 45 - Divisible by 5
 Input: 23 - Not Divisible by 5

*/

#include <stdio.h>
#include <stdlib.h>


//////////////////////////////////////////////////////
//
//  Function Name: checking the number is divisble by 5 or not
//  Description  : checking the number is divisble by 5 or not from user
//  Input        : int
//  output       : char
//  Author       : Girish Jagtap
//  Date         : 21/10/2026
//////////////////////////////////////////////////////////



void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("it is Divisible by 5\n");
    }
    else
    {
        printf(" it is not Divisible by 5\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}
