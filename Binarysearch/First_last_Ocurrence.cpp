#include<iostream>
#include<algorithm>

using namespace std;

int last_occurence(int a[],int n,int key)
{
    int s = 0;
    int e = n-1;

    int ans = -1;

    while(s<=e)
    {
        int mid = (s+e)/2;

        if(a[mid]==key)
        {
            ans = mid;
            s = mid+1;
        }
        if( a[mid] > key)
        {
            e = mid -1;
        }
        else
        {
            s = mid +1;
        }
    }

    return ans;
}


int first_occurence(int a[],int n,int key)
{
    int s = 0;
    int e = n-1;

    int ans = -1;

    while(s<=e)
    {
        int mid = (s+e)/2;

        if(a[mid]==key)
        {
            ans = mid;
            e = mid-1;
        }
        else if( a[mid] > key)
        {
            e = mid -1;
        }
        else
        {
            s = mid +1;
        }
    }

    return ans;
}

bool compare(int a,int b)
{
    return a<b;
}

int main()
{
    int a[1000];
    int key;
    cout<<"Key: ";
    cin>>key;
    int n;
    cin>>n;

    cout<<"Array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n,compare);

    cout<<"Sorted: ";

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    //int a[] = {1,2,3,8,8,8,8,8,9,10};
    //int n = sizeof(a)/sizeof(int);

    cout<<"["<<first_occurence(a,n,key)<<","<<last_occurence(a,n,key)<<"]"<<endl;
}

