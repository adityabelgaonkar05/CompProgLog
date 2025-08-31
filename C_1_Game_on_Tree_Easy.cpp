#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    vector<vector<int>> adj(n + 1);

    int h = n - 1;
    while (h--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    vector<int> indeg(n + 1);

    for (auto i : adj)
        for (auto j : i)
            indeg[j]++;

    queue<int> q;
    vector<int> a;

    for (int i = 1; i <= n; ++i)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
        }
    }

    while (q.size())
    {
        int it = q.front();
        q.pop();

        a.push_back(it);

        for (auto i : adj[it])
        {
            indeg[i]--;
            if (indeg[i] == 0)
                q.push(i);
        }
    }

    int m;
    cin >> m;

    int ind = find(a.begin(), a.end(), m) - a.begin();

    if ((n - ind - 1) % 2 == 0 && (ind) % 2 == 0)
        cout << "Hermione\n";
    else
        cout << "Ron\n";

    return 0;
}