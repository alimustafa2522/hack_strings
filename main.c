#include<stdio.h>
#include<string.h>
char * replaceCharCopy(const char *s, char oldChar, char newChar);



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
    replaceCharCopy(string,old_Char,new_Char);

    printf("modified string : %s",string);

    printf("original string : %s",string);
    printf("modified string : %s",replaceCharCopy(string,old_Char,new_Char));
    

    return 0;
}



