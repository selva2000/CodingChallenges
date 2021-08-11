#include<iostream>
using namespace std;


void Selction_sort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_index = i;
        for(int j=i; j<n-1; j++)
        {

            if(a[j]<a[min_index])
            {
                min_index = j;
            }
        }

        swap(a[i],a[min_index]);

    }


}

int main()
{

    int n,key;
    cin>>n;

    int a[100];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }


    Selction_sort(a,n);

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<",";
    }
}
