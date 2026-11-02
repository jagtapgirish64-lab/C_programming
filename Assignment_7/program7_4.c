// write a program which accepts N from user and print all odd number up to N.

//  input:18
//  output: 1    3   5  7   9   11  13

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////
//
//  Function Name: Display the N from user and print  all odd number up to N
//  Description  : Display the number user N and that aall numbers of odd
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt % 2) !=0 )
        {
        printf("%d ",iCnt);
        }
    }

}

int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}