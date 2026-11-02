/*
Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)

*/


#include<stdio.h>

/////////////////////////////////////////////////////
//
//  Function Name:convert the kilometers to meters  
//  Description  : convert the kiometers to metrs from user input
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////


int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d\n", iRet);

    return 0;
}
