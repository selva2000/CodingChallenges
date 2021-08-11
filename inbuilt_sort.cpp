#include<iostream>
#include<algorithm>
using namespace std;

//For descending order using compare in sort()
bool compare(int a,int b)
{
    return  a > b;

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

    //sort(a, a + n); //For Ascending Sort

    sort(a, a + n, compare); //For descending order


    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<",";
    }
}
