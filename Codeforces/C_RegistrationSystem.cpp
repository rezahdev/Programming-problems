#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    map<string, int> m;
    string s;

    for(int i=0; i<n; i++)
    {
        cin>>s;

        if(m.find(s) != m.end())
        {
            cout<<s<<to_string(m[s]++)<<endl;
        }
        else
        {
            m[s] = 1;
            cout<<"OK"<<endl;
        }
    }

    return 0;
}
