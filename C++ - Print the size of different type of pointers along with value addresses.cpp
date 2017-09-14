#include <iostream>

using namespace std;

int main()
{
	int   *iptr;
	char  *cptr;
	float *fptr;

	cout<<sizeof(iptr)<<","<<sizeof(cptr)<<","<<sizeof(fptr)<<endl;
	cout<<sizeof(*iptr)<<","<<sizeof(*cptr)<<","<<sizeof(*fptr)<<endl;

	return 0;
}
