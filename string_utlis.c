#include<stdio.h>
char replaceChar(char *string, char old_Char, char new_Char)

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

char replaceCharCopy(char *string, char old_Char, char new_Char){

char *dyn_str = (char*) malloc(strlen(string)+ 1); 

char *dyn_str_cpy=dyn_str;

while(*string!='\0'){

        if(*string==old_Char){

            *string=new_Char;
            }

        *dyn_str=*string;

        string++;
        dyn_str++;

    }

    *dyn_str='\0';

return dyn_str_cpy;

}







