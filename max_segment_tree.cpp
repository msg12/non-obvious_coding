/* -----KAUN_MEET--------*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod =1000000007;
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


int aa[200005], st[4 * 200005];

void build(int node, int start, int end)
{
    if (start == end)
    {
        st[node] = aa[start];
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);
    st[node] = max(st[2 * node], st[2 * node + 1]);
}

int query(int node, int start, int end, int l, int r)
{
    if (l <= start && end <= r)
        return st[node];
    if (r < start || l > end)
        return 0;
    int mid = (start + end) / 2;
    int child1 = query(2 * node, start, mid, l, r);
    int child2 = query(2 * node + 1, mid + 1, end, l, r);
   return  max(child1, child2);
}

void update(int node, int start, int end, int index, int val)
{
    if (start == end)
    {
        st[node] = val;
        aa[index] = val;
    }
    else
    {
        int mid = (start + end) / 2;
        if (start <= index && index <= mid)
            update(2 * node, start, mid, index, val);
        else
            update(2 * node + 1, mid + 1, end, index, val);

        st[node] = max(st[2 * node], st[2 * node + 1]);
    }
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