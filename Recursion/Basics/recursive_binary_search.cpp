#include<iostream>
using namespace std;


int bin_search(int a[],int s,int e,int t)
{




    while(s<=e)
    {
        int mid=(s+e)/2;

        if(a[mid] == t)
        {
            return mid;
        }

        else if(t<a[mid])
        {
            return bin_search(a,s,mid-1,t);
        }

        else
        {
            return bin_search(a,mid+1,e,t);
        }


    }

    return -1;


}

int main()
{
    int a[] = {1,2,3,4,5,10,20};
    int n = sizeof(a)/sizeof(int);

    int target;
    cin>>target;

    int s = 0;
    int e=n-1;

    cout<<bin_search(a,s,e,target);
}
