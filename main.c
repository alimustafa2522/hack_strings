#include<stdio.h>
#include<string.h>


#include "string_utlis.h"




int main()
{

    char string[100];
    char new_Char;
    char old_Char;


    printf("Enter String : ");
    scanf("%s",string);

    printf("Enter the character that you want to replace:");
    scanf("%c",&old_Char);

    printf("Enter character that you want to add:");
    scanf("%c",&new_Char);


    replaceChar( string,old_Char,new_Char);
    

    printf("modified string : %s",string);

    replaceCharCopy(string,old_Char,new_Char);

    printf("original string : %s",string);
    printf("modified string : %s",replaceCharCopy(string,old_Char,new_Char));


    char c;
    printf("Enter character you want to remove : ");
    scanf("%c",&c);

    removechar(string,c);

    printf("modified string : %s",string);











    return 0;
}



