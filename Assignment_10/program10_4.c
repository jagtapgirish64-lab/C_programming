/*
Write a program which accept temperature in Fahrenheit and convert it into
celsius. (1 celsius = (Fahrenheit -32) *
*/




#include<stdio.h>


/////////////////////////////////////////////////////
//
//  Function Name:converting the tempertaure into farhrenheit to celsius 
//  Description  : converting the tempertaure into farhrenheit to celsius from the useer input
//  Input        : int
//  output       : float
//  Author       : Girish Jagtap
//  Date         : 02/11/2026
//////////////////////////////////////////////////////////


double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %lf\n", dRet);

    return 0;
}
