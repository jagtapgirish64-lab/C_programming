/*
check voting Eligibility

problem statament:Accept the age of a person and determine whether the person is eligible to vote. 
A person  must be at least 18 years old to vote. A negative age should be conidered invalid
*/


#include<stdio.h>
#include<stdlib.h>


///////////////////////////////////////////////////////
//
//  Function Name: checking the voting Eligibility
//  Description  : checking the voting Eligibility from user 
//  Input        : int
//  output       : char
//  Author       : Girish Jagtap
//  Date         : 21/10/2026
//////////////////////////////////////////////////////////


void CheckvotingEligibility(int iAge)
{
    int i =0;
    if( iAge>=18)
    {
        printf("it is Eligible for voting");
    }
    else
    {
        printf("it is not Eligible for voting");
    }
    if( iAge<0)
    {
        printf("invalid age ");
    }


}


int main()
{
    int iAge=0;

    printf("Enter your age:");
    scanf("%d",&iAge);

    CheckvotingEligibility(iAge);

    return EXIT_SUCCESS;
}
