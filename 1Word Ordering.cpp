#include <bits/stdc++.h>
using namespace std;

int val(string s, map<char, int> pat)
{
    int total = 0;
    for(int i=0; i<s.length(); ++i)
    {
        total += pat[s[i]] * (i+1);
    }
    return total;
}


int main() {
    map<char, int> pat;

    string cs;
    cin>>cs;

    for(int i=0; i<cs.length(); ++i)
    {
        pat[cs[i]] = i+1;
        pat[toupper(cs[i])] = i+27;
    }

    int t;
    cin>>t;
    map<string, int> str;
    string s;

    for(int i=0; i<t; ++i)
    {
        cin>>s;
        str[s] = val(s, pat);
    }

    map<string, int>::iterator it;

    for(it = str.begin(); it != str.end(); ++it)
    {
        cout<<it->first<<'\t'<<it->second<<endl;
    }
}


