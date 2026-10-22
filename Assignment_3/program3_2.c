// write a program which accept number from  user and print even factors of that number.
// input : 24
// output:  1   2   4   6   8   12
  
#include<stdio.h>

///////////////////////////////////////////////////////
//
//  Function Name: Acceot one number from user and write even factor of that number and also 1
//  Description  : even factor of that number from user
//  Input        : int
//  output       : int
//  Author       : Girish Jagtap
//  Date         : 20/10/2026
/////////////////////////////////////////////////////////

int DisplayFactor(int iNo)
{
    int i=0;
    
    for(i=1; i<=iNo; i++)
    {
         if(iNo % i == 0)
        {
            if(i == 1)
            {
                printf("%d\n", i);
            }
            else
            {
                if(i % 2 == 0)
                {
                    printf("%d\n", i);
                }
            }
        }
    }
       
   
}

   

int main()
{
    int iValue=0;
    printf("enter number :");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;

}