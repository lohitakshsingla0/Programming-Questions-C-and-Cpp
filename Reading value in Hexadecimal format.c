#include <stdio.h>
int main()
{
	unsigned char a;
	int b;

	printf("Enter value of a: ");
	scanf("%x",&a);
	printf("Enter value of b: ");
	scanf("%x",&b);

	printf("Value of a: Hex: %X, Decimal: %d\n",a,a);
	printf("Value of b: Hex: %X, Decimal: %d\n",b,b);

	return 0;
}
