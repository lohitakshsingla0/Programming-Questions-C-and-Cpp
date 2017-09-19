#include<stdio.h>

#define SUM(A,B)    (A+B)       // addition of two numbers
#define AVG(A,B)    ((A+B)/2)   // average of two numbers
#define MAX(A,B)    ((A>B)?A:B)  // largest number

int main()
{
    int num1,num2;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    printf("Sum is = %d\n",SUM(num1,num2));
    printf("Average  is = %d\n",AVG(num1,num2));
    printf("Largest Number is = %d\n",MAX(num1,num2));
    return 0;
}
