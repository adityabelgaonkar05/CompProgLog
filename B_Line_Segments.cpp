#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        double dist = sqrt((x1 - x2) * (x1 - x2) + (y2 - y1) * (y2 - y1));

        double suma = accumulate(a.begin(), a.end(), 0ll); // total sum
        double maxi = *max_element(a.begin(), a.end());    // largest edge

        suma -= maxi;

        // if largest edge is less than or equal than sum of all edges - dist

        // cout << dist << ' ' << maxi << ' ' << suma << ' ';

        if (dist > suma + maxi)
        {
            cout << "No\n";
        }
        else if (maxi > suma + dist)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}