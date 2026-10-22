 /*check Divisibility by 3 and 5

Problem Statement: Accept an integer and determine whether it is divisible by both 3 and 5, only 3, only 5,or neither.
Expected Output:

 Input: 15 -Divisible by Both
Input: 9 Divisible by 3 Only
 Input: 10 - Divisible by 5 Only
 Input: 7 -> Not Divisible by Either
 */

#include <stdio.h>
#include <stdlib.h>


////////////////////////////////////////////////////
//
//  Function Name: Divisible by 3 or 5
//  Description  : checking the number which is divisiable by 3 or 5 from user
//  Input        : int
//  output       : char
//  Author       : Girish Jagtap
//  Date         : 22/10/2026
/////////////////////////////////////////////////////////


void CheckMultipleDivisibility(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("Divisible by Both\n");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3 Only\n");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 Only\n");
    }
    else
    {
        printf("Not Divisible by Either\n");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}
