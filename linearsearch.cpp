#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    for(i=0;i<n;i++)
    {
        if(a[i]==8)
        {
            cout<<a[i];
            break;
        }
    }
    if(i==n)
    {
        cout<<"Element not present";
    }
}
