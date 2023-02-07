#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, m;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        int nums[n];

        for(int i=0; i<n; i++)
        {
            cin>>nums[i];
        }
        int c = 0;
        int ind = -1;
        for(int i=0; i<n; i++)
        {
            m = 2147483647;
            ind  = -1;
            for(int j=0; j<n; j++)
            {
                if(nums[j] != -1 && nums[j] < m)
                {
                    m = nums[j];
                    ind = j;
                }
            }
            if(ind >= 0)
            {
                nums[ind] = -1;
                if((ind+1) > k) c++;
            }

        }
        cout<<c<<endl;
    }
    return 0;
}
