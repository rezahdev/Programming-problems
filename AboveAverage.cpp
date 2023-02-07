#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c, n, sum, a;
    double avg, res;

    cin>>c;

    while(c--)
    {
        sum = 0;
        a = 0;

        cin>>n;

        int g[n];

        for(int i=0; i<n; ++i)
        {
            cin>>g[i];
            sum += g[i];
        }

        avg = ((double)(sum)) / ((double)(n));

        for(int i=0; i<n; ++i)
        {
            if(g[i] > avg)
            {
                ++a;
            }
        }

        res = ((double)a / (double)n) * 100.0;
        printf("%.3f%\n", res);
    }

    return 0;
}
