/* program define, undefine and redefine a macro*/
#include<stdio.h>

int main()
{
    /*Define MAXBUFF*/
    #define MAXBUFF 100
    printf("\nMAXBUFF is : %d",MAXBUFF);

    #undef  MAXBUFF         /*Un-define MAXBUFF*/
    #define MAXBUFF 200     /*Redefine MAXBUFF*/

    printf("\nMAXBUFF is : %d",MAXBUFF);
    return 0;
}
