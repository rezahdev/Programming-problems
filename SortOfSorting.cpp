#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    while(n != 0)
    {
        string str[n];

        for(int i=0; i<n; i++)
        {
            cin>>str[i];
        }

        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                if(str[j][0] > str[j+1][0])
                {
                    swap(str[j], str[j+1]);
                }
                if(str[j][0] == str[j+1][0] && str[j][1] > str[j+1][1])
                {
                    swap(str[j], str[j+1]);
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            cout<<str[i]<<endl;
        }

        cin>>n;
    }
    return 0;
}
