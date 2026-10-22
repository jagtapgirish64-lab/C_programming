

/*2 - Check Leap Year
Problem Statement: Accept a year and determine whether it is a leap year according to Gregorian calendar
rules. A year is a leap year if it is divisible by 400, or divisible by 4 but not by 100. Consider years less than
or equal to zero invalid.
Expected Output:
. Input: 2024 -> Leap Year
. Input: 1900 -> Not a Leap Year
*/

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////
//
//  Function Name: checking the year or not
//  Description  : checking the year or not from user
//  Input        : int
//  output       : char
//  Author       : Girish Jagtap
//  Date         : 22/10/2026
/////////////////////////////////////////////////////////



void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid Year\n");
    }
    else if(iYear % 400 == 0)
    {
        printf("Leap Year\n");
    }
    else if(iYear % 4 == 0 && iYear % 100 != 0)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}








