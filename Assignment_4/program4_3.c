/*
find the greater of two number 
problem statement : Accept two integer and determine which number is greater.if both number are,display an appropriate message.


*/


#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name: checking the which number is maximum from both numbers
//  Description  : checking the number from user which number is maximum
//  Input        : int
//  output       : char
//  Author       : Girish Jagtap
//  Date         : 21/10/2026
//////////////////////////////////////////////////////////


void FindGreater(int iFirst, int iSecond)
{
    if(iFirst >= iSecond)
    {
        printf("Maximum is : %d\n",iFirst);
    }
    else
    {
        printf("Maximum is : %d\n",iSecond);
    }
}





int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter two numbers:");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}