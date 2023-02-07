#include <bits/stdc++.h>
using namespace std;

vector<int> pos(char a, char b, string pat)
{
    int arr[2];
    int l = pat.length();

    for(int i=0; i<l; ++i)
    {
        if(pat[i] == a) arr[0] = i;
        if(pat[i] == b) arr[1] = i;
    }

    vector<int> vec {arr[0], arr[1] };
    return vec;
}

bool isGreater(string a, string b, string pat)
{
    int l = a.length() < b.length() ? a.length() : b.length();
    for(int i=0; i<l; i++)
    {
        vector<int> p;
        p = pos(a[i], b[i], pat);

        int pa = p.at(0);
        int pb = p.at(1);

        if(pa > pb)
        {
            return true;
        }
        else if(pa < pb)
        {
            return false;
        }
    }

    if(a.length() > b.length())
    {
        return true;
    }
    return false;
}

int main() {
    string pat;

    cin>>pat;

    int t;

    cin>>t;

    string s[t];

    for(int i=0; i<t; ++i)
    {
        cin>>s[i];
    }



    int patl = pat.length();
    for(int i=0; i<patl; ++i)
    {
        pat += toupper(pat[i]);
    }


    for(int i=0; i<t-1; ++i)
    {
        for(int j=0; j<t-i-1; ++j)
        {
            if(isGreater(s[j], s[j+1], pat))
            {
                string temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    for(int i=0; i<t; ++i)
    {
        cout<<s[i]<<endl;
    }
}

