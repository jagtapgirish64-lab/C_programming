// Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo"

#include<stdio.h>

////////////////////////////////////////////////////////
//
//  Function Name: Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo"
//  Description  : Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo"
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 19/10/2026
//////////////////////////////////////////////////////////


int Display( int iNo)
{
    int iCnt = 0;

    if( iNo <= 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}