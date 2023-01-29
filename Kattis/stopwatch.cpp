
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, time = 0;

    cin>>n;

    int t[n];
    for(int i=0; i<n; ++i)
    {
        cin>>t[i];
    }

    if(n%2 != 0)
    {
        cout<<"still running";
    }
    else
    {
        for(int i=0; i<n; ++i)
        {
            if(i%2 != 0)
            {
                time += t[i] - t[i-1];
            }
        }
        cout<<time;
    }

    return 0;
}
