/*C++ program to demonstrate use of
protected data members in inheritance*/

#include <iostream>

using namespace std;

//class definition
class A{
	private:
		int a;
	protected:
		int p;
	public:
		void get_a(int a){
			this->a=a;
		}
		void put_a(){
			cout<<"a="<<a<<endl;
		}
};
class B: public A{
	private:
		int b;
	public:
		void get_b(int b){
			this->b=b;
		}
		void get_p(int p){
			this->p=p;
		}
		void put_b(){
			cout<<"b="<<b<<endl;
		}
		void put_p(){
			cout<<"p="<<p<<endl;
		}
};
int main(){
	//creating object of B (derieved class)
	B objB;
	//get values of a,b and p
	objB.get_a(10);
	objB.get_b(20);
	objB.get_p(30);
	//print values of a,b and p
	objB.put_a();
	objB.put_b();
	objB.put_p();

	return 0;
}
