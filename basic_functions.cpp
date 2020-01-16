/* -----KAUN_MEET--------*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod =1e9+7;
#define P get<0>
#define D get<1>
#define T get<2>
#define C get<3>
#define PB push_back
#define MP make_pair
#define BS binary_search
#define LB lower_bound
#define UB upper_bound
#define F first
#define S second
#define gcd __gcd
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

bool prime[10000001];
void sieveFunction(int maxLimit)
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i <= maxLimit; i++)
    {
        if (prime[i])
        {
            for (int j = 2 * i; j < maxLimit; j += i)
                prime[j] = false;
        }
    }
}
int modpower(int a, int n) //binary expo
{
    int r;
    if (n == 0)
        return 1;
    if (n == 1)
        return a;

    r = modpower(a, n / 2);
    if (n % 2 == 0)
        return ((r) % mod) * ((r) % mod) % mod;
    else
        return ((((r) % mod) * ((r) % mod)) % mod) * ((a) % mod) % mod;
}
void primeFactors(int n)
{

    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {

        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }

    if (n > 2)
        cout << n << " ";
}

void binary_rock()
{
}

signed main()
{
    fastio
        clock_t t1 = clock();

    int t = 1;
    // cin >> t;
    while (t--)
    {
        binary_rock();
    }

    clock_t t2 = clock();
    // cout << "Time-Taken: " << ((t2 - t1) / (double)CLOCKS_PER_SEC) << endl;
    // cout << CLOCKS_PER_SEC << endl;
    return 0;
}