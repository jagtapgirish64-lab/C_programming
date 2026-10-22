/*Calculate Student Grade

Problem Statement: Accept the marks of a student out of 100 and display the grade according to the
following criteria. Marks outside 0-100 are invalid.
///////////////////////////////////////////////////
Marks           Grade
//////////////////////////////////////////////////////
90-100          A
75-89           B
60-74           C   
40-59           D
Below 40        Fail
//////////////////////////////////////////
Expected Output:
 Input: 85 + Grade B
 Input: 35 - Fail
 Input: 105 -+ Invalid Marks
*/

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////
//
//  Function Name:student grade
//  Description  : checking the student grade out of 100 which is pass or fail from user
//  Input        : int
//  output       : char
//  Author       : Girish Jagtap
//  Date         : 22/10/2026
/////////////////////////////////////////////////////////



void DisplayGrade(float fMarks)
{
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks\n");
    }
    else if(fMarks >= 90)
    {
        printf("Grade A\n");
    }
    else if(fMarks >= 75)
    {
        printf("Grade B\n");
    }
    else if(fMarks >= 60)
    {
        printf("Grade C\n");
    }
    else if(fMarks >= 40)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}
