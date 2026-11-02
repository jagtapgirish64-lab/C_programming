// write a program which accept N and print first 5 mutiples of N


// Input:4
// Output:  4   8   12  16  20

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////
//
//  Function Name:  Display the Mutiple upto 5
//  Description  :Display the number from user upto 5 mutiple from the input
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    iCnt=1;
    while(iCnt<=5)
    {
        printf("%d ",iNo*iCnt);
        iCnt++;
    }
    
}




int main()
{
    int iValue=0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}