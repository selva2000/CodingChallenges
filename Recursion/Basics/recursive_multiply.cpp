//  WITHOUT USING * operator

#include<iostream>
using namespace std;

int multiply(int a,int b)
{
     if(b== 0){
        return 0;
    } else {

       // Add first num, until second num is equal to zero.
       return (a + multiply(a, b-1));
    }
}

int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;

    cout<<multiply(a,b);
}
