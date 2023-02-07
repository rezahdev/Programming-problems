#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, w, h, m;

    cin>>n>>w>>h;

    int d = sqrt((w*w) + (h*h));

    for(int i=0; i<n; i++)
    {
        cin>>m;

        if(m <= d) cout<<"DA"<<endl;
        else cout<<"NE"<<endl;
    }

    return 0;
}
