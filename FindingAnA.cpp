#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    string s;
    string r = "";

    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'a')
        {
            for(int j=i; j<s.length(); j++)
            {
                r += s[j];
            }
            break;
        }
    }

    cout<<r;

    return 0;
}
