#include<bits/stdc++.h>
using namespace std;

int bin_search(int a[],int n,int key)
{
    int s=0;
    int e=n-1;

    while(s<=e)
    {
        int mid=(s+e)/2;

        if(a[mid]==key)
        {
            return key;
        }
        if(a[mid]>key)
        {
            e=mid-1;
        }
        if(a[mid]<key)
        {
            s=mid+1;
        }

    }
    return -1;


}
int main()
{
    int n,key;
    cin>>n;
    cin>>key;

    int a[1000];
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<bin_search(a,n,key)<<endl;
}
