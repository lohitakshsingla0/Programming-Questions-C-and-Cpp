#include <stdio.h>

#define CONCAT(x,y) x##y

int main()
{
	printf("value1: %d\n",CONCAT(10,20));
	printf("value2: %d\n",CONCAT(10,20)+100);
	return 0;
}
