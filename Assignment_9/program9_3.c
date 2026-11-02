//  write a program to find even factorial of given number.

//input:5
//output:8
//input:-5
//output:8
//input:10
//output:3840

#include<stdio.h>
#include<stdlib.h>



/////////////////////////////////////////////////////
//
//  Function Name:print even Factorial   
//  Description  : prrint evenfactrerial of given input from the user
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////

int evenfactorial(int iNo)
{
    int iCnt=0,iFact=1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            
            iFact=iFact*iCnt;
        }
        
    }
    return iFact;
}

int main()
{
    int iValue=0,iret=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iret=evenfactorial(iValue);

    printf("the even factorial is : %d",iret);

    return EXIT_SUCCESS;
}