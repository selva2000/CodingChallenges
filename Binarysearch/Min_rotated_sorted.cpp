include<iostream>
using namespace std;


int find_mininum(int a[],int n)
{
     int s =0;
     int e =nums.size()-1;

        while(s<=e)
        {
            if(nums[s]<nums[e]){
                return nums[s];
            }

            int mid =(s+e)/2;

            if(nums[mid]>=nums[s]){
                s = mid+1;
            }else{
                e = mid;
            }

        }

        return nums[s];
}

int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


}
