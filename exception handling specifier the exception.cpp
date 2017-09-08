#include<iostream>
using namespace std;


void func(int test) throw(int,char,double)
{

    if(test==0)
        throw test;

    if(test==1)
        throw 'a';

    if(test==2)
        throw 22.33;
}


int main()
{
    int a;
    cin>>a;

    try
    {
    func(a);
    }
    catch(int i)
    {
        cout<<i;
    }
    catch(char c)
    {
        cout<<c;
    }
    catch(double d)
    {
        cout<<d;
    }

}
