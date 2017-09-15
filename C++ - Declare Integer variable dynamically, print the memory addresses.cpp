#include <iostream>

using namespace std;

int main()
{
    int a;
	int *ptr;
	ptr=new int;

	cout<<(&ptr)<<","<<ptr<<endl;

	ptr=new int;

	cout<<(&ptr)<<","<<ptr<<endl;

	delete (ptr);

	return 0;
}
