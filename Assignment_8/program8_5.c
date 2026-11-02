// write a program which accept number from user and display its table in reverse order.
//input:2
//output:20 18  16  14  12  10  8   6   4   2
//input:-5
//output:50 45  40  35  30  25  20  15  10  5

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////
//
//  Function Name:print reverse table   
//  Description  : prrint reverse table  of given input from the user
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=10;iCnt>=1;iCnt--)
    {
        printf("%d ",iCnt*iNo);
    }
}

int main()
{
    int iValue=0;

    printf("enter the number:");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}