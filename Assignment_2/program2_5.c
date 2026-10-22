// Accept number from user check whether number is even is or odd.

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////
//
//  Function Name: Accept one number from user check whether number is even is or odd.
//  Description  : Accept one number from user check whether number is even is or odd.
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 19/10/2026
//////////////////////////////////////////////////////////


#define TRUE 1
#define FALSE 0

typedef int Bool;

bool checkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;
   
    printf("Enter the number ");
    scanf("%d",&iValue);

    bRet = checkEven(iValue);

    if( bRet == true)
    {
        printf("it is even");
    }
    else
    {
        printf("it is odd");
    }

    return 0;
}