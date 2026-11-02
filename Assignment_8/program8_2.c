// Accept single digit number from user and print it into word
// input:9
//output:nine
//input:-3
//output:three
//input:12
//output:invalid input 

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////
//
//  Function Name:display the digit number and print its words 
//  Description  : Display the digit number and print its words from the user input
//  Input        : int
//  output       : char
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////


void display(int iNo)
{
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    if(iNo==1)
    {
        printf("One");
    }
    else if(iNo==2)
    {
        printf("Two");
    }
    else if(iNo==3)
    {
        printf("Three");
    }
    else if(iNo==4)
    {
        printf("Four");
    }
    else if(iNo==5)
    {
        printf("Five");
    }
    else if(iNo==6)
    {
        printf("Six");
    }
    else if(iNo==7)
    {
        printf("Seven");
    }
    else if(iNo==8)
    {
        printf("Eight");
    }
    else if(iNo==9)
    {
        printf("Nine");
    }
    else if(iNo==0)
    {
        printf("Zero");
    }
    else
    {
        printf("invalid input because it is not a digit it is a number");
    }
}

int main()
{
    int iValue=0;

    printf("Enter the digit:");
    scanf("%d",&iValue);

    display(iValue);

    return EXIT_SUCCESS;
}
