/*C++ - Program to demonstrate example of Passing
Structure within a function.*/

#include <iostream>
#include <iomanip>

using namespace std;

#define MAX 100
struct student{
	char name[30];
	int rollNumber;
};

void read(struct student &s)
{
	     cout<<"Enter name:";
		cin.ignore(1);
		cin.getline(s.name,30);
		cout<<"Enter roll number:";
		cin>>s.rollNumber;
}

void display (struct student s)
{
	cout<<setw(30)<<s.name<<setw(10)<<s.rollNumber<<endl;
}

int main(){
	struct student std[MAX];
	int n,loop;

	cout<<"Enter total number of students: ";
	cin>>n;

	//read n records
	for(loop=0; loop<n; loop++){
		read(std[loop]);
	}

	//print all records
	cout<<"Entered records are:"<<endl;
	cout<<setw(30)<<"Name"<<setw(20)<<"Roll Number"<<endl;
	for(loop=0;loop<n;loop++){
		display(std[loop]);
	}

	return 0;
}
