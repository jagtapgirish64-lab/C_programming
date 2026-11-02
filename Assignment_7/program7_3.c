/*
write a program which accpet number from user and print its number line 

input : 4
output: -4  -3  -2  -1  0   1   2   3   4


*/

#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////
//
//  Function Name: diplay the number negative to postive 
//  Description  :Display the number from nagative to postive its number from the user input
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 1;

    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
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