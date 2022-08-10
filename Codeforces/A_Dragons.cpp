#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;

    cin>>s>>n;

    int d[n];
    int b[n];

    for(int i=0; i<n; i++)
    {
        cin>>d[i]>>b[i];
    }

    for(int i=0; i<n-1; i++)
    {

        for(int j=0; j<n-i-1; j++)
        {
            if(d[j] > d[j+1])
            {
                swap(d[j], d[j+1]);
                swap(b[j], b[j+1]);
            }
        }
    }

    bool win = true;

    for(int i=0; i<n; i++)
    {
        if(s > d[i])
        {
            s += b[i];
        }
        else
        {
            win = false;
        }
    }

    if(win)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
