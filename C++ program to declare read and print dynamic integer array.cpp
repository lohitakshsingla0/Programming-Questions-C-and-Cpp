#include <iostream>

using namespace std;

int main()
{
	int *arr;
	int i,n;

	cout<<"Enter total number of elements:";
	cin>>n;

	//declare memory
	arr=new int(n);

	cout<<"Input "<<n<<" elements"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Input element "<<i+1<<": ";
		cin>>arr[i];
	}

	cout<<"Entered elements are: ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	delete (arr);
	return 0;
}
