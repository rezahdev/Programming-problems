#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    char str[1000];

    cin>>n>>s;

    while(n>0)
    {
        scanf(" %[^\n]s", str);
        n--;
    }

    cout<<s;

    return 0;
}
