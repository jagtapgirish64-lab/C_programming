//write a program which accept number from user and if number is less than 50
//then print small,if it is greater than 50 and less than 100 then print medium,
//if it is greater than 100 then print large
//
//input:75
//output:medium

#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////
//
//  Function Name: Checking the number is small or medium or large from user input  
//  Description  :Checking the number is small or medium or large from user input 
//  Input        : int
//  output       : char
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////

void Number(int iNo)
{
    int ismall=0, imedium=50, ilarge=75;
    if(iNo<=50)
    {
        printf("small");
    }
    else if(iNo>=50 && iNo<100)
    {
        printf("medium");
    }
    else if(iNo>=100)
    {
        printf("large");
    }


}




int main()
{
    int iValue=0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}