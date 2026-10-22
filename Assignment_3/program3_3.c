// write the  program which accept number from user and print even factors of that number.
//  input : 36
//  output: 2   6   12  18

#include<stdio.h>


//////////////////////////////////////////////////////
//
//  Function Name: Accept number from user and print even factors of that number
//  Description  : even factor of that number from user
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 20/10/2026
/////////////////////////////////////////////////////////

void Evenfactor(int iNo)
{
    int i=0;

    for(i=1; i<=iNo; i++)
    {
        if((iNo % i) == 0 && (i % 2) == 0)
        {
            printf("%d ",i);
        }
    }
}


int main()
{
    int iValue=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Evenfactor(iValue);

    return 0;
}