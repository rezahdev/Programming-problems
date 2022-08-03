#include<bits/stdc++.h>
using namespace std;

map<long long, long long> values;

long long coinVal(long long n)
{
    if(n == 0)
    {
        return 0;
    }

    if(values[n] != 0)
    {
        return values[n];
    }
    else
    {
        long long ans = coinVal(n/2) + coinVal(n/3) + coinVal(n/4);
        if(ans>n)
        {
            values[n] = ans;
        }
        else
        {
            values[n] = n;
        }
        return values[n];
    }
}

int main()
{
    long long n;

    while(cin>>n)
    {
        cout<<coinVal(n)<<endl;
    }

    return 0;
}
