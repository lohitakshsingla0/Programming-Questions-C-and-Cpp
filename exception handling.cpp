#include<iostream>
using namespace std;


class abc
{

    int a,b;
public:
    void input(int x,int y)
    {
        a=x;
        b=y;
    }
    void display1()
    {

        cout<<a<<b;
    }
      void display2()
    {

        cout<<"wrong input";
    }
};


int main()
{

    int a,b;
    cin>>a>>b;
    abc o;
    try
    {
    if(a==0 && b==0)
    {

        throw o;
    }
    else
    {
        o.input(a,b);
        o.display1();
    }}
     catch(abc o1)
     {

         o1.display2();
     }


    }

