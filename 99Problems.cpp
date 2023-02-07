#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, temp1, temp2;

    cin>>n;

    temp1 = n;
    temp2 = n;

    while(temp1%100 != 99)
    {
        temp1++;
    }

    if(temp2 >= 100)
    {
        while(temp2%100 != 99)
        {
            temp2--;
        }
    }
    else
    {
        temp2 = 0;
    }

    if(temp2 == 0)
    {
        cout<<temp1;
    }
    else if((temp1-n) < (n-temp2))
    {
        cout<<temp1;
    }
    else if((temp1-n) > (n-temp2))
    {
        cout<<temp2;
    }
    else
    {
        cout<<((temp1 > temp2) ? temp1 : temp2);
    }
    return 0;
}
