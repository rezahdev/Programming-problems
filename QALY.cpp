#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    float q, y, total = 0.0;

    cin>>n;

    while(n--)
    {
        cin>>q>>y;

        total += q*y;
    }

    cout<<total;

    return 0;

}
