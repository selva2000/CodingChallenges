#include<iostream>

using namespace std;

int Inc(int n)
{
    if(n==0)
    {
        return n;
    }

    Inc(n-1);
    cout<< n<< endl;

}

int Dec(int n)
{
    if(n==0)
    {
        return n;
    }

    cout<< n <<endl;
    Dec(n-1);
}

int main()
{
    int n;
    cin>>n;

    cout<<"Increasing order: "<<endl;
    cout<< Inc(n) << endl;

    cout<<"Decreasing order: "<<endl;
    cout<< Dec(n) << endl;
}
