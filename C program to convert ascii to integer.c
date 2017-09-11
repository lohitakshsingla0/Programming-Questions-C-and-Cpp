//Program to convert ascii to integer (atoi implementation)

#include <stdio.h>
#include <string.h>

/*function declaration
    * name      : a2i
    * Desc      : to convert ascii to integer
    * Parameter : char* - character string
    * return    : int
*/
int a2i(char*);

int main()
{
    char string[5];
    printf("Enter a string value :");
    scanf("%s",string);
    printf("\nInteger value = %d\n",a2i(string));

    return 0;
}

/*Function definition : a2i()*/
int a2i(char* txt)
{
    int sum,digit,i;
    sum=0;
    for(i=0; i < strlen(txt); i++)
    {
        digit=txt[i]-0x30;
        sum=(sum*10)+digit;
    }
    return sum;
}
