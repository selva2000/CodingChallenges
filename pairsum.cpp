#include<iostream>
#include<algorithm>
using namespace std;

//TWO POINTER APPROACH [ CAN ONLY WHEN IT IS SORTED ARRAY ]

int main()
{
    int n;
    cin>>n;

    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;
    }

    int i =0;
    int j = 0;
    int s = 16;


    i = 0;
    j = sizeof(a)/sizeof(int) -1;

    while(i<j)
    {
        if(a[i]+a[j]<s)
        {
            i++;
        }
        else if(a[i]+a[j]>s)
        {
            j--;
        }
        else if(a[i]+a[j] == s)
        {
            cout<< a[i] << " and " << a[j] << endl;
            i++;
            j--;
        }
    }




}
