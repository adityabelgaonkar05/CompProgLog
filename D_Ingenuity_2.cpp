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
        string s;
        cin >> s;

        if (s.size() == 2)
        {
            if (s[0] != s[1])
            {
                cout << "NO\n";
                continue;
            }

            else
            {
                cout << "RH\n";
                continue;
            }
        }

        map<char, int> mp;
        for (auto i : s)
            mp[i]++;

        if ((mp['N'] - mp['S']) & 1)
        {
            cout << "NO\n";
            continue;
        }

        else if ((mp['E'] - mp['W']) & 1)
        {
            cout << "NO\n";
            continue;
        }

        else
        {
            string ans(n, '#');
            int norths, souths, easts, wests;
            int currnorths = 0, currsouths = 0, curreasts = 0, currwests = 0;
            int nms = (mp['N'] - mp['S']);
            int emw = (mp['E'] - mp['W']);

            if (nms < 0)
            {
                souths = nms / -2;
                norths = 0;
            }

            else if (nms > 0)
            {
                norths = nms / 2;
                souths = 0;
            }

            else
            {
                norths = mp['N'] / 2;
                souths = norths;
            }

            if (emw < 0)
            {
                wests = emw / -2;
                easts = 0;
            }

            else if (emw > 0)
            {
                easts = emw / 2;
                wests = 0;
            }

            else
            {
                easts = mp['E'] / 2;
                wests = easts;
            }

            if (emw == 0 && nms == 0 && mp['N'] && mp['E'])
            {
                for (int i = 0; i < n; ++i)
                {
                    if (s[i] == 'N' || s[i] == 'S')
                    {
                        ans[i] = 'R';
                    }

                    else
                    {
                        ans[i] = 'H';
                    }
                }
            }

            else
            {
                for (int i = 0; i < n; ++i)
                {
                    if (s[i] == 'N')
                    {
                        if (norths > currnorths)
                        {
                            currnorths++;
                            ans[i] = 'H';
                        }

                        else if (2 * norths > currnorths)
                        {
                            currnorths++;
                            ans[i] = 'R';
                        }
                    }

                    else if (s[i] == 'S')
                    {
                        if (souths > currsouths)
                        {
                            currsouths++;
                            ans[i] = 'R';
                        }

                        else if (2 * souths > currsouths)
                        {
                            currsouths++;
                            ans[i] = 'H';
                        }
                    }

                    else if (s[i] == 'E')
                    {
                        if (easts > curreasts)
                        {
                            curreasts++;
                            ans[i] = 'R';
                        }

                        else if (2 * easts > curreasts)
                        {
                            curreasts++;
                            ans[i] = 'H';
                        }
                    }

                    else if (s[i] == 'W')
                    {
                        if (wests > currwests)
                        {
                            currwests++;
                            ans[i] = 'R';
                        }

                        else if (2 * wests > currwests)
                        {
                            currwests++;
                            ans[i] = 'H';
                        }
                    }
                }

                for (int i = 0; i < n; ++i)
                {
                    if (ans[i] == '#')
                    {
                        ans[i] = 'R';
                    }
                }
            }

            cout << ans << '\n';
        }
    }

    return 0;
}