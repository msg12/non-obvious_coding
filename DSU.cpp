/* -----KAUN_MEET--------*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int parent[100000 + 7];
void make_parent()
{
    int i;
    for (i = 0; i < 100000 + 7; i++)
    {
        parent[i] = i;
    }
}
int find_parent(int x)
{
    if (x == parent[x])
        return x;
    parent[x] = find_parent(parent[x]);
    return parent[x];
}
void unionn(int x, int y)
{
    int px = find_parent(x);
    int py = find_parent(y);
    if (px == py)
        return;
    if (px < py)
        parent[py] = px;
    else
        parent[px] = py;
}

void binary_rock()
{
}

signed main()
{
    
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