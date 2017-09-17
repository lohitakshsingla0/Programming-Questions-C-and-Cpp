#include <stdio.h>
int main()
{
	printf("Hello%cworld.%c",0x0A,0x0A);
	printf("Hello%cworld.%c",10,10);
	printf("Hello%cworld.%c",'\n','\n');
	return 0;
}
