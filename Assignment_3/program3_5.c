// Accept on character from user and check whether that is vowel (a,e,i,o,u) or not
//  Input:E     output:true
//  input:d     output:false

#include <stdio.h>

//////////////////////////////////////////////////////
//
//  Function Name: vowels (a,e,i,o,u)
//  Description  : print vowels on screen if is a vowel print true or not a vowel print false
//  Input        : char
//  output       : char
//  Author       : Girish Jagtap
//  Date         : 20/10/2026
/////////////////////////////////////////////////////////

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main(void)
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf(" %c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}