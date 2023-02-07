#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int x, n, p;

    cin>>x>>n;

    int used = 0;

    for(int i=0; i<n; i++)
    {
        cin>>p;
        used += p;
    }

    cout<< ((n+1)*x) - used;

    return 0;
}



