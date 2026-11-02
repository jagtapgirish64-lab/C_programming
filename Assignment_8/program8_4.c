// write a program which accpet number from user and display its table.
// input:2
//output:2  4   6   8   10  12  14  16  18  20
//input:-5
//output:5  10  15  20  25  30  35  40  45  50


#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////
//
//  Function Name:print Table 
//  Description  : prrint Tables of given input from the user
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d ",iCnt*iNo);
    }
}

int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}