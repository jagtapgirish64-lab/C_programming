//write a program which accept number from user and display below pattern

//input:5
//output:*  *   *   *   *   #   #   #   #   #
//input:-5
//output:*  *   *   *   *   #   #   #   #   #

#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////
//
//  Function Name:display special charcter
//  Description  : display special charcter from the user
//  Input        : int
//  output       : char
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t",iCnt);
    }

    iCnt=1;
    while(iCnt<=iNo)
    {
        printf("#\t",iCnt);
        iCnt++;
    }
    printf("\n");
}


int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}