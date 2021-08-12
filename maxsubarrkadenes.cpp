#include<iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    cin>>n;
    int cs = 0;
    int ms = 0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cs = cs + a[i];
        if(cs < 0)
        {
            cs = 0;
        }
    }

    ms = max(cs,ms);

    cout<<"Max: "<<ms<<endl;
}
