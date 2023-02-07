#include<bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
    double n;

    cin>>n;

    double d1 = 100.0/n;
    double d2 = 100.0/(100.0 - n);

    cout<<fixed;
    cout<<setprecision(9);
    cout<<d1<<endl<<d2;

    return 0;
}
