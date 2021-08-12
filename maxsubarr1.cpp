
#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int cum_sum[100]= {0};

    int a[100];

    cin>>a[0];
    cum_sum[0] = a[0];

    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        cum_sum[i] = cum_sum[i-1] + a[i];

    }

    int k;
    int sum = 0;
    int max_sum=0;
    int left = -1;
    int right = -1;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum = 0;

            sum = cum_sum[j] - cum_sum[i-1];
            //cout<<"sum: "<<sum<<endl;

        if(sum> max_sum)
        {
            max_sum = sum;
            left = i;
            right = j;
        }

        }
    }

    cout<<"MaximumSum: "<<max_sum<<endl;
    for(int k=left;k<=right;k++)
    {
        cout<<a[k]<<",";
    }

}


