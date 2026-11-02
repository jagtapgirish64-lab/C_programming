/*
Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
*/

/////////////////////////////////////////////////////
//
//  Function Name:finding the circle area  
//  Description  : Findimg the circle area rom user input
//  Input        : float
//  output       : float
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf\n", dRet);

    return 0;
}
