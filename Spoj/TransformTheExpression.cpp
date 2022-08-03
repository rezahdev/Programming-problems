#include<bits/stdc++.h>
using namespace std;

string sorted(string s)
{

}

int main()
{
    queue<char> chars;

    int n;
    string s;

    cin>>n;

    while(n--)
    {
        cin>>s;

        for(int i=0; i<s.length(); i++)
        {
            chars.push(s[i]);
        }

        stack<char> tmp;
        stack<char> str;
        string s;

        while(!chars.empty())
        {
            if(chars.front() == '(')
            {
                if(!tmp.empty())
                {
                    while(!tmp.empty())
                    {

                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
