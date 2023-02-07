#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;

    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        cin>>str;

        if(i%2 != 0)
        {
            cout<<str<<endl;
        }
    }
    return 0;
}
