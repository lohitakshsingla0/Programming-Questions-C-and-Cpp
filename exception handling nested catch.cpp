#include<iostream>
using namespace std;


void function()
{

    try{
    throw "hello";
    }
    catch (const char*)
    {
        cout<<"  inside function";
        throw ;
    }

    }
int main()
{

    cout<<"main";
    try
    {

        function();
    }
    catch (const char*)
    {
        cout<<"inside main";
    }
}
