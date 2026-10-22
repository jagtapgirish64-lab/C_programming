// check even or odd number
// problem statement Accept an integer from the user and determine whether it is even or odd . An even number is completelu divisible by 2

// input--> even number
// input--> odd number


#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////
//
//  Function Name: check the number is even or odd   
//  Description  : checking the number from user it is even or odd
//  Input        : int
//  output       : char
//  Author       : Girish Jagtap
//  Date         : 21/10/2026
//////////////////////////////////////////////////////////

void CheckEvenOdd(int iValue)
{
    int i=0;

    if((iValue % 2) == 0)
    {
        printf("it is even number \n");
    }
    else
    {
        printf("it is odd number");
    }
}

int main()
{
    int iValue = 0;

    printf("enter the number:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}