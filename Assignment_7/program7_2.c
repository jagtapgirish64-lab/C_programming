/*
write a program which accept number from user and print number till that number

input:8
output:1    2   3   4   5   6   7   8
*/

#include<stdio.h>
#include<stdlib.h>



/////////////////////////////////////////////////////
//
//  Function Name: Display the number till that the number
//  Description  : display the number from the user input and that number till 
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////


void Display(int iNo)          
{
    int iCnt=1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d ",iCnt);
    }
    
}

int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}