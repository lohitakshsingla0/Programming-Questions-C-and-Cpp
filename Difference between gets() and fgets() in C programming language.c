#include <stdio.h>
#define MAX 20

int main()
{
	char buf[MAX];

	printf("Enter a string: ");
	gets(buf);
	printf("string is: %s\n",buf);

	return 0;
}
