// Accept one number from user and print that numder of * on screen

////////////////////////////////////////////////////////
//
//  Function Name: Accept one number from user and print 
//  Description  : Accept one number from user and print that of * on screen
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 19/10/2026
//////////////////////////////////////////////////////////

#include<stdio.h>

int Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++ )
    {
        printf("*", iCnt);
    }
}


int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;

} 