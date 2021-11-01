#include<iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;


    int no;
    int a=0;

    //xor operator to give unique element ex: 2^3^2 = 3. => same xor will delete eacxh
    //helped to not any storage

    for(int i=0;i<n;i++)
    {
        cin>>no;
        a = a^no;
    }

    cout<<"Ans:"<<a<<endl;
}
