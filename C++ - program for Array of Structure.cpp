/*C++ - program for Array of Structure.*/

#include <iostream>
#include <iomanip>

using namespace std;

#define MAX 100
struct student{
	char name[30];
	int rollNumber;
};

int main(){
	struct student std[MAX];
	int n,loop;

	cout<<"Enter total number of students: ";
	cin>>n;

	for(loop=0; loop<n; loop++){
		cout<<"Enter name:";
		cin.ignore(1);
		cin.getline(std[loop].name,30);
		cout<<"Enter roll number:";
		cin>>std[loop].rollNumber;
	}

	cout<<"Entered records are:"<<endl;
	cout<<setw(30)<<"Name"<<setw(20)<<"Roll Number"<<endl;

	for(loop=0; loop<n; loop++){
		cout<<setw(30)<<std[loop].name<<setw(10)<<std[loop].rollNumber<<endl;
	}

	return 0;
}
