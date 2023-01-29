#include<bits/stdc++.h>
using namespace std;

int digit_sum(int n)
{
    int sum = 0;

    while(n > 0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int l, d, x, s;
    int n = INT_MAX, m = INT_MIN;

    cin>>l>>d>>x;

    for(int i=l; i<=d; i++)
    {
        s = digit_sum(i);
        if(s == x && i < n) n = i;
        if(s == x && i > m) m = i;
    }
    cout<<n<<endl<<m;

    return 0;
}
