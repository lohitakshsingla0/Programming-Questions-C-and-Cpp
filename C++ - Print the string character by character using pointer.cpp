#include <iostream>

using namespace std;

int main()
{
	char name[]="lohitaksh singla";
	char *ptr=name;

	while(*ptr!=NULL){
		cout<<*ptr;
		ptr++;
	}

	cout<<endl;
	return 0;
}
