#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for(int i=2; i<n; ++i)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int n, x, nreps;
    int primes[32000];
    string reps;

    cin>>n;

    for(int i=2; i<=32000; ++i)
    {
        if(isPrime(i))
        {
            primes[i] = i;
        }
        else
        {
            primes[i] = 0;
        }
    }

    for(int i=0; i<n; ++i)
    {
        cin>>x;
        reps = "";
        nreps = 0;
        bool isUsed[x] = {false};

        for(int j=2; j<x; ++j)
        {
            if(!isUsed[j] && primes[j] != 0 && primes[x-j] != 0)
            {
                reps += to_string(primes[j]) + "+" + to_string(primes[x-j]) + "\n";
                isUsed[x-j] = true;
                ++nreps;
            }
        }
        cout<< to_string(x) + " has " + to_string(nreps) + " representation(s)\n" + reps + "\n";
    }

    return 0;
}
