#include <bits/stdc++.h>
#include <sstream>

#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int ans = 0;

bool isposs(vector<int> x)
{
    bool cond = 1;
    for (int ex = 0; ex < x.size(); ++ex)
    {
        vector<int> a;
        bool isposs = 1;

        for (int i = 0; i < x.size(); ++i)
        {
            if (i != ex)
                a.push_back(x[i]);
        }

        for (int i = 0; i < a.size() - 1; ++i)
        {
            if ((abs(a[i] - a[i + 1]) > 3) || (abs(a[i] - a[i + 1]) < 1))
            {
                isposs = 0;
                break;
            }
        }

        if (
            !(is_sorted(a.begin(), a.end(), [](int a, int b)
                        { return a >= b; })) &&
            !(is_sorted(a.begin(), a.end())))
            isposs = 0;

        // for (int i : a)
        //     cout << i << ' ';
        // cout << '\n';

        if (isposs)
            cond = 0;

        if (!cond)
        {
            break;
        }
    }

    return cond;
}

bool diff2(vector<int> a)
{
    int cond = 0;

    for (int i = 0; i < a.size() - 1; ++i)
    {
        if ((abs(a[i] - a[i + 1]) > 3) || (abs(a[i] - a[i + 1]) < 1))
        {
            cond = 1;
            break;
        }
    }

    if (
        !(is_sorted(a.begin(), a.end(), [](int a, int b)
                    { return a >= b; })) &&
        !(is_sorted(a.begin(), a.end())))
        cond = 1;

    if (cond)
        cond = isposs(a);

    return cond;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string line;
    vector<vector<int>> res;
    while (getline(cin, line))
    {
        istringstream iss(line);
        vector<int> toadd;
        int pushh;

        while (iss >> pushh)
        {
            toadd.push_back(pushh);
        }

        res.push_back(toadd);
    }

    for (auto i : res)
    {
        int cond = 1;
        if (diff2(i))
            cond = 0;

        if (cond)
        {
            ans++;
            //     for (auto j : i)
            //         cout << j << ' ';
            //     cout << '\n';
        }
    }

    cout << ans;

    return 0;
}