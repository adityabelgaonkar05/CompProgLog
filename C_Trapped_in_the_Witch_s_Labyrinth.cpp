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
        int n, m;
        cin >> n >> m;
        vector<string> a(n);
        for (auto &i : a)
            cin >> i;

        set<pair<int, int>> free;
        set<pair<int, int>> trapped;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (free.find({i, j}) != free.end())
                {
                    continue;
                }

                else if (trapped.find({i, j}) != trapped.end())
                {
                    continue;
                }

                else
                {
                    set<pair<int, int>> visited;
                    int tempx = i;
                    int tempy = j;
                    bool istrapped = 0;
                    bool isfree = 0;

                    while ((tempx >= 0 && tempx < n) && (tempy >= 0 && tempy < m))
                    {
                        if ((visited.find({tempx, tempy}) != visited.end()) || (trapped.find({tempx, tempy}) != trapped.end()))
                        {
                            for (auto i : visited)
                            {
                                trapped.insert(i);
                            }

                            istrapped = 1;

                            break;
                        }

                        else if (free.find({tempx, tempy}) != free.end())
                        {
                            for (auto i : visited)
                            {
                                free.insert(i);
                            }

                            isfree = 1;

                            break;
                        }

                        visited.insert({tempx, tempy});
                        if (a[tempx][tempy] == 'U')
                        {
                            tempx--;
                        }

                        else if (a[tempx][tempy] == 'D')
                        {
                            tempx++;
                        }

                        else if (a[tempx][tempy] == 'L')
                        {
                            tempy--;
                        }

                        else if (a[tempx][tempy] == 'R')
                        {
                            tempy++;
                        }
                    }

                    if (!istrapped && !isfree)
                    {
                        for (auto i : visited)
                        {
                            free.insert(i);
                        }
                    }
                }
            }
        }

        for (int tempx = 0; tempx < n; ++tempx)
        {
            for (int tempy = 0; tempy < m; ++tempy)
            {
                if (a[tempx][tempy] == '?')
                {
                    if (tempx > 0 && a[tempx - 1][tempy] == 'D')
                    {
                        a[tempx][tempy] = 'U';
                    }

                    else if (tempx < n - 1 && a[tempx + 1][tempy] == 'U')
                    {
                        a[tempx][tempy] = 'D';
                    }

                    else if (tempy > 0 && a[tempx][tempy - 1] == 'R')
                    {
                        a[tempx][tempy] = 'L';
                    }

                    else if (tempy < m - 1 && a[tempx][tempy + 1] == 'L')
                    {
                        a[tempx][tempy] = 'R';
                    }

                    // checking for ?

                    else if (tempx > 0 && a[tempx - 1][tempy] == '?')
                    {
                        a[tempx][tempy] = 'U';
                    }

                    else if (tempx < n - 1 && a[tempx + 1][tempy] == '?')
                    {
                        a[tempx][tempy] = 'D';
                    }

                    else if (tempy > 0 && a[tempx][tempy - 1] == '?')
                    {
                        a[tempx][tempy] = 'L';
                    }

                    else if (tempy < m - 1 && a[tempx][tempy + 1] == '?')
                    {
                        a[tempx][tempy] = 'R';
                    }

                    // trapped checking

                    else if (tempx > 0 && trapped.find({tempx - 1, tempy}) != trapped.end())
                    {
                        a[tempx][tempy] = 'U';
                    }

                    else if (tempx < n - 1 && trapped.find({tempx + 1, tempy}) != trapped.end())
                    {
                        a[tempx][tempy] = 'D';
                    }

                    else if (tempy > 0 && trapped.find({tempx, tempy - 1}) != trapped.end())
                    {
                        a[tempx][tempy] = 'L';
                    }

                    else if (tempy < m - 1 && trapped.find({tempx, tempy + 1}) != trapped.end())
                    {
                        a[tempx][tempy] = 'R';
                    }

                    else
                    {
                        a[tempx][tempy] = 'R';
                    }
                }
            }
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (free.find({i, j}) != free.end())
                {
                    continue;
                }

                else if (trapped.find({i, j}) != trapped.end())
                {
                    continue;
                }

                else
                {
                    set<pair<int, int>> visited;
                    int tempx = i;
                    int tempy = j;
                    bool istrapped = 0;
                    bool isfree = 0;

                    while ((tempx >= 0 && tempx < n) && (tempy >= 0 && tempy < m))
                    {
                        if ((visited.find({tempx, tempy}) != visited.end()) || (trapped.find({tempx, tempy}) != trapped.end()))
                        {
                            for (auto i : visited)
                            {
                                trapped.insert(i);
                            }

                            istrapped = 1;

                            break;
                        }

                        else if (free.find({tempx, tempy}) != free.end())
                        {
                            for (auto i : visited)
                            {
                                free.insert(i);
                            }

                            isfree = 1;

                            break;
                        }

                        visited.insert({tempx, tempy});
                        if (a[tempx][tempy] == 'U')
                        {
                            tempx--;
                        }

                        else if (a[tempx][tempy] == 'D')
                        {
                            tempx++;
                        }

                        else if (a[tempx][tempy] == 'L')
                        {
                            tempy--;
                        }

                        else if (a[tempx][tempy] == 'R')
                        {
                            tempy++;
                        }
                    }

                    if (!istrapped && !isfree)
                    {
                        for (auto i : visited)
                        {
                            free.insert(i);
                        }
                    }
                }
            }
        }

        for (auto i : a)
            cout << i << '\n';

        // for (auto i : trapped)
        //     cout << '{' << i.first << ' ' << i.second << "} ";
        // cout << '\n';
        // for (auto i : free)
        //     cout << '{' << i.first << ' ' << i.second << "} ";
        // cout << '\n';

        cout << trapped.size() << '\n';
    }

    return 0;
}