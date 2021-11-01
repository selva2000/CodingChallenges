#include<iostream>
#include<algorithm>

using namespace std;


bool pred_space(int stalls[],int cows,int n,int min_sep)
{

    int first_cow = stalls[0];
    int c =1;

   for(int i=0;i<n;i++)
   {
     if(stalls[i]-first_cow>=min_sep)
     {
         first_cow = stalls[i];
         c++;

         if(c==cows)
         {
             return true;
         }
     }
   }
   return false;

}

int main()
{
    int stalls[1000];
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>stalls[i];
    }


    sort(stalls,stalls+n);

    for(int i=0;i<n;i++)
    {
        cout<<stalls[i]<<" ";
    }

    int cows;
    cin>>cows;

    //starting and ending
    int s = 0;
    int e=stalls[n-1]-stalls[0];

    int ans=0;

    while(s<=e)
    {
        int mid = (s+e)/2;

        bool finded_space = pred_space(stalls,cows,n,mid);

        if(finded_space)
        {
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }

    cout<<ans;
}
