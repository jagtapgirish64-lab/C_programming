// Accept two numberss from user and display first number in second number of times
/*
input:  12  5
output  12  12  12  12  12

input:-2 3
output:-2   -2  -2

input:21 -3
output:21   21  21  

input:-2    0
output:
*/


#include<stdio.h>

////////////////////////////////////////////////////////
//
//  Function Name: Accept one number from user and display first number in second number of times
//  Description  : Accept one number from user and display first number in second number of times
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 19/10/2026
//////////////////////////////////////////////////////////


int Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    //
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d \n",iNo);
    }
    
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    printf("Enter the frequency :");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}