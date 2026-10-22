// write a program which accept one number from user and print that number of even number on screen.

//  Input: 7
//  output: 2   4   6   8   10  12  14

#include<stdio.h>


///////////////////////////////////////////////////////
//
//  Function Name: Acceot one number from and print  even number of that number
//  Description  : Accept one number from user and even number of that number
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 20/10/2026
/////////////////////////////////////////////////////////

void printeven(int iNo)
{
    
    if(iNo <=0)
    {
        return;
    }
    
    int i = 1;
    while( i<=iNo)
    {
        printf("%d\t",i*2);
        i++;
    }
}

int main()
{
    int iValue;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    printeven(iValue);
    
    return 0;
}