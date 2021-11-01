#include<iostream>
#include<string.h>
#include <cctype>
using namespace std;


int main()
{
    char a;
    cin>>a;

    if(a >= 'A' && a <= 'Z' )
    {
        cout<<"UPPERCASE";
    }
    else if(a >= 'a' && a<= 'z')
    {
        cout<<"lowercase";
    }
    else{
        cout<<"Invalid";
    }


}
