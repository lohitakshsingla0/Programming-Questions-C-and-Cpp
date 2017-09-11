//Program to calculate total elapsed time by program/ function.

#include <stdio.h>
#include <time.h>
int main()
{
    time_t prg_begin,prg_end;
    char str[100];
    prg_begin=clock();
    printf("Enter any string :");
    gets(str);
    printf("Entered value is :%s\n",str);


    prg_end=clock();
    printf("%f seconds taken by this program...",(double)(prg_end-prg_begin)/(double)CLK_TCK);
    return 0;
}
