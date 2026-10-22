// check whether a number is positive or negative
// problem statement: write a C program that accept an integer from the user and determines whether the entered number is postive,negative, or zero.
// input:15 --->Positive number
// input:-8 --->Negative number
// input:0  --->Zero

#include<stdio.h>
#include<stdlib.h>


////////////////////////////////////////////////////////
//
//  Function Name: check the number is postive or negative  
//  Description  : checking the number from user it is postive or else nagative or zero 
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 21/10/2026
//////////////////////////////////////////////////////////

void Checknumber(int iValue)
{
 

    if( iValue>0)
    {
        printf("it is a postive number\n");
    }
    else if( iValue<0)
    {
        printf("it is negative number\n");
    }
    if(iValue==0)
    {
        printf("it is zero");
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    Checknumber(iValue);

    return EXIT_SUCCESS;
}