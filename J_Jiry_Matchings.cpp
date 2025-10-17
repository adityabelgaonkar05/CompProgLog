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

    int n;
    cin >> n;

    vector<vector<int>> edges;
    for (int i = 0; i < n; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edges.push_back({c, a, b});
    }

    vector<int> size(n + 1, 1), parent(n + 1);

    for (int i = 1; i <= n; ++i)
        parent[i] = i;

    sort(edges.begin(), edges.end());

    int ans = 0;

    int done = 0;

    for (auto i : edges)
    {
        int a = find(i[1], parent);
        int b = find(i[2], parent);

        if (a == b)
        {
            continue;
        }

        ans += i[0];
        cout << ans << '\n';
        done++;
        Union(i[2], i[1], parent, size);
    }

    for (int i = done; i < n; ++i)
        cout << "? ";

    return 0;
}