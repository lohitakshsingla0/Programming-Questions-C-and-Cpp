#include <stdio.h>

int main()
{
	int number;

	//read number
	printf("Enter any number (1-100): ");
	scanf("%d",&number);

	//switch case statement
	switch(number)
	{
		//case values within a range
		case 1 ... 50:
			printf("Number is in between 1 to 50\n");
			break;
		//case values within a range
		case 51 ... 100:
			printf("Number is in between 51 to 100\n");
			break;
		//default case
		default:
			printf("Number is out of range!!!\n");
			break;
	}

	return 0;
}
