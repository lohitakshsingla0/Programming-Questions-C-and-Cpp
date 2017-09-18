#include <stdio.h>
#define MAX 50

int main()
{
	float x=0.0f;
	char buf[MAX];

	printf("Enter first number: ");
	scanf("%f",&x);

	gcvt(x,6,buf);

	printf("buffer is: %s\n",buf);

	return 0;
}
