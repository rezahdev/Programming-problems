#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, t, n, time = 0;

    cin>>s>>t>>n;

    int a;
    int b;
    int c;

    for(int i=0; i<=n; ++i)
    {
        cin>>a;
    }

    for(int i=0; i<n; ++i)
    {
        cin>>b;
        time += b;
    }

    for(int i=0; i<n; ++i)
    {
        cin>>c;
        time += c;
    }

    time += s;
    time += a;

    if(time <= t) cout<<"yes";
    else cout<<"no";

    return 0;
}
