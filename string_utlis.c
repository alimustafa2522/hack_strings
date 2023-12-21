#include<stdio.h>
char replaceCharCopy(char *string, char old_Char, char new_Char)

{
    while(*string!='\0')
    {
        if(*string == old_Char)
        {
            string = new_Char;
        }
        string++;
    }
}






