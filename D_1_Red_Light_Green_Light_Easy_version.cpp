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
        int n, k;
        cin >> n >> k;

        vector<int> p(n), d(n);
        for (auto &i : p)
            cin >> i;
        for (auto &i : d)
            cin >> i;

        int q;
        cin >> q;

        vector<int> que(q);
        for (auto &i : que)
            cin >> i;

        for (int pos : que)
        {
            int curr = pos;
            int currtime = 0;
            set<int> forwardvis;
            set<int> backwardvis;
            int dir = 0;

            if (pos > p.back())
            {
                cout << "YES\n";
                continue;
            }

            int inin = lower_bound(p.begin(), p.end(), curr) - p.begin();
            if (inin <= 0 || inin >= n)
            {
                cout << "YES\n";
                continue;
            }
            if (d[inin] == 0)
            {
                dir = 1;
                forwardvis.insert({curr, 0});
            }

            int poss = 1;
            while (poss)
            {
                // cout << "pos: " << curr << ' ' << "time: " << currtime << ' ' << "dir: " << dir << '\n';
                if (!dir)
                {
                    int ind = upper_bound(p.begin(), p.end(), curr) - p.begin();
                    if (ind == n)
                        break;
                    int newcurr = p[ind];
                    currtime += abs(newcurr - curr);
                    curr = newcurr;
                    if ((currtime - d[ind]) % k == 0)
                    {
                        if (forwardvis.find(curr) != forwardvis.end())
                        {
                            poss = 0;
                            break;
                        }
                        forwardvis.insert(curr);
                        dir = 1;
                    }
                }

                else
                {
                    int ind = lower_bound(p.begin(), p.end(), curr) - p.begin();
                    if (ind == 0)
                        break;
                    ind--;
                    int newcurr = p[ind];
                    currtime += abs(newcurr - curr);
                    curr = newcurr;

                    if ((currtime - d[ind]) % k == 0)
                    {
                        if (backwardvis.find(curr) != backwardvis.end())
                        {
                            poss = 0;
                            break;
                        }
                        backwardvis.insert(curr);
                        dir = 0;
                    }
                }
            }

            if (poss)
            {
                cout << "YES\n";
                continue;
            }

            else
                cout << "NO\n";
        }
    }

    return 0;
}