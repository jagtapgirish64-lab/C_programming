// Accept one number from user and print that number of * on screen

#include<stdio.h>

////////////////////////////////////////////////////////
//
//  Function Name: Accept one number from user and print 
//  Description  : Accept one number from user and print that of * on screen
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 20/10/2026
//////////////////////////////////////////////////////////


void Display(int iNo)
{
    int iCnt = 0;
    //
    while (iCnt <= iNo)
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :",iValue);
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}