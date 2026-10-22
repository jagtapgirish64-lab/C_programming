/*1 - Find the Greatest of Three Numbers
Problem Statement: Accept three integers and determine the greatest number among them. The program must also work correctly when two or all three numbers are equal.
Expected Output:
Input: 10 50 30->50 is Greatest
Input: 40 40 20-40 is Greatest
Input: 15 15 15-15 is Greatest
*/

#include <stdio.h>
#include <stdlib.h>


/////////////////////////////////////////////////////
//
//  Function Name: checking the number which number is greater 
//  Description  : checking the number which number is grater than out of 3 number from user
//  Input        : int,int,int
//  output       : int,char
//  Author       : Girish Jagtap
//  Date         : 21/10/2026
/////////////////////////////////////////////////////////


void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst >= iSecond && iFirst >= iThird)
    {
        printf("%d is Greatest\n", iFirst);
    }
    else if(iSecond >= iFirst && iSecond >= iThird)
    {
        printf("%d is Greatest\n", iSecond);
    }
    else
    {
        printf("%d is Greatest\n", iThird);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}
