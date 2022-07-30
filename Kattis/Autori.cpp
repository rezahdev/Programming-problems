#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{

    string s;
    cin>>s;
    int n = s.length();
    string r = "";

    for(int i=0; i<n; i++)
    {
        if(i == 0)
        {
            r += s[i];
        }
        if(s[i-1] == '-')
        {
            r += s[i];
        }
    }
    cout<<r;

    return 0;
}

