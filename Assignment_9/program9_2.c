//accept amout in US dollar and return its correcponding value in Indian curraency consider 1$ as 70 ruppee.
// input:10
//output:700
//input:3
//output:210



#include<stdio.h>
#include<stdlib.h>



/////////////////////////////////////////////////////
//
//  Function Name:Conversion into Dollar to ruppee   
//  Description  : Conversion into Dollar to ruppee from the user input
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iDol=1,iInr=0;
    for(iDol=1;iDol<=iNo;iDol++)
    {
        iInr=iInr+70;
    }
    return iInr;
}


int main()
{
    int iValue=0, iret=0;

    printf("Enter the number of USD:");
    scanf("%d",&iValue);

    iret=DollarToINR(iValue);

    printf("Value in INR is : %d",iret);

    return EXIT_SUCCESS;
}