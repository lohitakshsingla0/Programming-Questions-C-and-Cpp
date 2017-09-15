/*C++ - program for Nested Structure
(Structure with in Structure).*/

#include <iostream>
using namespace std;

struct date_of_birth{
	int dd,mm,yy;
};

struct student{
	char name[30];
	int rollNumber;
	date_of_birth dob;
};

int main(){
	student s;
	cout<<"Enter name : ";
	cin.getline(s.name,25);
	cout<<"Enter roll number : ";
	cin>>s.rollNumber;
	cout<<"Enter date of birth (dd mm yy) : "  ;
	cin>>s.dob.dd>>s.dob.mm>>s.dob.yy;

	cout<<"Name:"<<s.name<<",Roll Number:"<<s.rollNumber<<endl;
	cout<<"Date of birth:"<<s.dob.dd<<"/"<<s.dob.mm<<"/"<<s.dob.yy<<endl;

	return 0;
}
