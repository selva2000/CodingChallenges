#include<iostream>
using namespace std;


int find_element(int a[],int n,int key)
{
    int s=0;
    int e=n-1;

    while(s<=e)
    {
        int mid = (s+e)/2;

        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[s]<=a[mid])
        {
            //2 - CASES{LEFT AND RIGHT OF MID}

            if(key>=a[s] and key<=a[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }

        }
        else
        {
            if(key>a[mid] and key<=a[e])
            {
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
    }

}

int main()
{

    int n;
    cin>>n;
    int key;
    cin>>key;

    int a[1000];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<find_element(a,n,key);

}
