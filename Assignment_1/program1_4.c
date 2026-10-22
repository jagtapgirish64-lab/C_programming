// Accept one numbers and check whether is divisible by 5 or not.

////////////////////////////////////////////////////////
//
//  Function Name: divisiable by 5
//  Description  : to check the the number is divisiable the 5 or not
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 19/10/2026
//////////////////////////////////////////////////////////


#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define False -1

int Check( int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = False;

    printf("Enter the number:\n ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE )
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}