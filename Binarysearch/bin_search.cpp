#include<iostream>

using namespace std;

int bin_search(int a[],int n,int key)
{
    int s=0;
    int e=n-1;

    while(s<=e)
    {
        int mid = (s+e)/2;

        if(a[mid] == key)
        {
            return mid;
        }

        if(a[mid] < key)
        {
            s = mid + 1;
        }

        else
        {
            e = mid-1;
        }

    }

    return -1;

}

int main()
{
    int a[1000];
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int key;
    cout<<"Key: ";
    cin>> key;

    cout<<bin_search(a,n,key);
}
