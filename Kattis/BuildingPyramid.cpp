#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i = 1;
    int c = 0;

    cin>>n;

    while((i*i) <= n)
    {
        c++;
        n = n - (i*i);
        i += 2;
    }

    cout<<c;

    return 0;
}
