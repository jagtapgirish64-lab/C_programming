/*
write a program which accept number from user and print that number of $ and * on screen

input: 5
output $    *   $   *   $   *   $   *   $   *
*/

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////
//
//  Function Name: A program which accept number from user and print $ and * on screen
//  Description  : print special charcter on screen from user input
//  Input        : int
//  output       : special charcter
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////

void pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n");
}


int main()
{
    int iValue=0;

    printf("enter the frequency:");
    scanf("%d",&iValue);

    pattern(iValue);
    return EXIT_SUCCESS;
}