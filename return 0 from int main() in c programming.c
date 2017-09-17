#include <stdio.h>
int main(){
	FILE *fp;
	//open any file
	fp=fopen("sample.txt","r");
	if(fp==NULL){
		printf("Error in file opening!!!\n");
		return -1;
	}
	printf("File opened successfully.\n");
	//closing the file
	fclose(fp);

	return 0;
}
