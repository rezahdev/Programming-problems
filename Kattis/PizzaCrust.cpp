#include<bits/stdc++.h>
using namespace std;

int main()
{
    double r, c;
    double ans;

    cin>>r>>c;

    if(r == c)
    {
        ans = 0;
    }
    else
    {
        ans = ((((r-c)*(r-c))/(r*r))*100);
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(6);

    cout<<ans;

    return 0;
}
