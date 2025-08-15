#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
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
    vector<int> parent(n + 1);
    vector<int> size(n + 1, 1);

    for (int i = 1; i <= n; ++i)
        parent[i] = i;

    while (m--)
    {
        int a, b;
        cin >> a >> b;

        Union(a, b, parent, size);
    }
    set<int> uniq;
    for (int i = 1; i <= n; ++i)
        uniq.insert(find(i, parent));

    vector<int> ans(uniq.begin(), uniq.end());

    cout << ans.size() - 1 << '\n';
    for (int i = 0; i < ans.size() - 1; ++i)
    {
        cout << ans[i] << ' ' << ans[i + 1] << '\n';
    }

    return 0;
}