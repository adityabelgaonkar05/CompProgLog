#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<pair<int, int>> a(n);
        for (auto &i : a)
            cin >> i.second;

        for (auto &i : a)
        {
            cin >> i.first;
            i.first = abs(i.first);
        }

        sort(a.begin(), a.end(), [](const pair<int, int> &x, const pair<int, int> &y)
             {
        if (x.first != y.first) 
            return x.first < y.first; 
        return x.second > y.second; });

        // for (auto i : a)
        //     cout << i.second << ' ';
        // cout << '\n';
        // for (auto i : a)
        //     cout << i.first << ' ';
        // cout << '\n';

        bool poss = 1;
        int currk = k;
        int offset = 0;

        for (int i = 0; i < n; ++i)
        {
            // cout << a[i].first << ' ' << offset << '\n';

            if (!poss)
                break;

            if (currk == 0)
            {
                offset++;
                currk = k;
            }

            if (a[i].first - offset <= 0)
            {
                poss = 0;
                break;
            }

            if (currk > a[i].second)
            {
                currk -= a[i].second;
                a[i].second = 0;
            }

            else if (currk == a[i].second)
            {
                currk = k;
                a[i].second = 0;
                offset++;
            }

            else
            {
                a[i].second -= currk;
                currk = k;
                // offset++;

                int tem = a[i].second / k;
                offset += tem;

                if (a[i].first - offset <= 0)
                {
                    poss = 0;
                    break;
                }

                else
                {
                    a[i].second -= tem * k;
                    currk -= a[i].second;
                }

                offset++;
            }
        }

        if (poss)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}