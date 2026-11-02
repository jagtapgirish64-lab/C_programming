// write a program to find factorial of given number.
//input:5
//output:120
//input:-5
//output:120
//input:4
//output:24

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////
//
//  Function Name:print Factorial   
//  Description  : prrint factrerial of given input from the user
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////


int Factorial(int iNo)
{
    int iCnt=0,iFact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact=iFact*iCnt;
    }
    return iFact;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial of number is: %d",iRet);

    return EXIT_SUCCESS;
}