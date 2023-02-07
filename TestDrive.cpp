#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;

    cin>>a>>b>>c;

    if(a>=b && b>=c)
    {
        if((a-b) == (b-c))
        {
            cout<<"cruised";
        }
        else if((a-b) > (b-c))
        {
            cout<<"braked";
        }
        else
        {
            cout<<"accelerated";
        }
    }
    else if(a<=b && b<=c)
    {
        if((b-a) == (c-b))
        {
            cout<<"cruised";
        }
        else if((b-a) > (c-b))
        {
            cout<<"braked";
        }
        else
        {
            cout<<"accelerated";
        }
    }
    else
    {
        cout<<"turned";
    }

    return 0;
}
