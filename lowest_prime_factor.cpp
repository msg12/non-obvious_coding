/* -----KAUN_MEET--------*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod = 1000000007;
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

void __print(int x)
{
    cerr << x;
}
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename Th, typename V>
void __print(const pair<Th, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename Th>
void __print(const Th &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename Th, typename... V>
void _print(Th t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif

const int N = 1000000;
vector<int> lpf;

void binary_rock()
{
    lpf.resize(N);
    int i;
    for (i = 0; i < N; i++)
        lpf[i] = i;

    for (i = 2; i < N; i++)
    {
        if (lpf[i] == i)
        {
            for (int j = i + i; j < N; j += i)
                if (lpf[j] == j)
                    lpf[j] = i;
        }
    }
    debug(lpf);
    // lpf[i] has the lowest prime factor of i
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