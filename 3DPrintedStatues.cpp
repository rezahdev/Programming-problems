#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, p, s;

    cin>>n;

    d = 0;
    p = 1;

    while((p*2)<n)
    {
        d++;
        p *= 2;
    }

    s=0;

    while(s < n)
    {
        s += p;
        d++;
    }

    cout<<d;

    return 0;
}
