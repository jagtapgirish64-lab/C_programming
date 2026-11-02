/*
Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter)

*/




#include<stdio.h>

/////////////////////////////////////////////////////
//
//  Function Name:converting the sq. feet to sq.meters
//  Description  : converting the sq. feet to sq.meters from the useer input
//  Input        : int
//  output       : float
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////


double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    dMeter = iValue * 0.0929;

    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf\n", dRet);

    return 0;
}
