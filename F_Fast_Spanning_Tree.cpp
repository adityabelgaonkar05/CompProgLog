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

void Union(int a, int b, vector<int> &parent, vector<int> &size,
           vector<int> &parentweight)
{
    a = find(a, parent);
    b = find(b, parent);
    if (a != b)
    {
        if (size[a] < size[b])
            swap(a, b);

        parent[b] = a;
        parentweight[a] += parentweight[b];
        size[a] += size[b];
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    set<vector<int>> edges;
    vector<int> w(n);
    for (auto &i : w)
        cin >> i;

    for (int i = 0; i < m; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int tp = min(a, b);
        int d = max(a, b);

        auto itt = edges.lower_bound({-1, -1, tp, d});

        if (itt == edges.end())
        {
            edges.insert({i, c, tp, d});
            continue;
        }

        auto it = *itt;

        if (it[2] == tp && it[3] == d)
        {
            if (c < it[1])
            {
                edges.insert({i, c, tp, d});
            }
            else
                continue;
        }

        edges.insert({i, c, tp, d});
    }

    vector<int> size(n + 1, 1), parent(n + 1);
    vector<int> parentweight(n + 1);

    for (int i = 1; i <= n; ++i)
        parentweight[i] = w[i - 1];

    vector<int> ans;

    for (int i = 1; i <= n; ++i)
        parent[i] = i;

    bool nonechosen = 0;

    while (!nonechosen)
    {
        bool chosen = 0;

        auto itr = edges.begin();

        while (itr != edges.end())
        {
            auto it = *itr;
            int a = find(it[2], parent);
            int b = find(it[3], parent);

            if (a == b)
            {
                itr++;
                continue;
            }

            if (it[1] > parentweight[a] + parentweight[b])
            {
                itr++;
                continue;
            }

            chosen = 1;

            Union(it[2], it[3], parent, size, parentweight);

            ans.push_back(it[0] + 1);

            edges.erase(itr);
            if (edges.size())
                itr = edges.begin();
            else
                itr = edges.end();
        }

        if (!chosen)
        {
            nonechosen = 1;
        }
    }

    cout << ans.size() << '\n';

    for (auto i : ans)
        cout << i << ' ';

    return 0;
}