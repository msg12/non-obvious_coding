#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1000000;
int isprime[N];
signed main()
{
    int i;
    for (i = 0; i < N; i++)
        isprime[i] = 1;
    // isprime[i]=1 means i is a prime number else not
    isprime[0] = -1;
    isprime[1] = -1;
    int j;
    for (i = 2; i < N; i++)
    {
        if (isprime[i])
        {
            for (j = i * i; j < N; j += i)
                isprime[j] = 0;
        }
    }

    return 0;
}
