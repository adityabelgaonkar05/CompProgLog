#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

int find(int v, vector<int> &parent)
{
    if (v == parent[v])
        return v;
    parent[v] = find(parent[v], parent);
    return parent[v];
}

void Union(int a, int b, vector<int> &parent, vector<int> &size)
{
    a = find(a, parent);
    b = find(b, parent);
    if (a != b)
    {
        if (size[a] < size[b])
            swap(a, b);

        parent[b] = a;
        size[a] += size[b];
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> size(n + 1, 1), parent(n + 1);

    for (int i = 1; i <= n; ++i)
        parent[i] = i;

    vector<vector<int>> adj(n + 1);

    int tm = m;
    while (m--)
    {
        int j;
        cin >> j;
        if (j)
        {
            int l;
            cin >> l;
            j--;
            while (j--)
            {
                int k;
                cin >> k;
                Union(l, k, parent, size);
            }
        }
    }

    for (int i = 1; i <= n; ++i)
        cout << size[find(i, parent)] << ' ';

    return 0;
}