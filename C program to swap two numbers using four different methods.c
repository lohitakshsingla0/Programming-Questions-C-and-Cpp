//C program to swap two numbers using four different methods.
#include <stdio.h> 
int main()
{
int a,b,t;
printf(" Enter value of A ?  ");
scanf("%d",&a);
printf(" Enter value of B ?  ");
scanf("%d",&b);
printf("\n Before swapping : A= %d, B= %d",a,b);
t=a;
a=b;
b=t;
printf("\n After swapping (First method) : A= %d, B= %d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n After swapping (second method): A= %d, B= %d\n",a,b);
a^=b;
b^=a;
a^=b;
printf("\n After swapping (third method) : A= %d, B= %d\n",a,b);
a=a+b-(b=a);
printf("\n After swapping (fourth method): A= %d, B= %d\n",a,b);
return 0;
}
