#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

vector<int> allfactors(int n)
{
    vector<int> factors;

    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            factors.push_back(i);
        }
    }

    return factors;
}

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
        vector<int> a(n);
        map<int, int> mp;
        for (auto &i : a)
        {
            cin >> i;
            mp[i]++;
        }

        int elements = n - 2;

        vector<int> fact = allfactors(elements);

        // for (int i : fact)
        //     cout << i << ' ';
        // cout << '\n';

        for (auto i : fact)
        {
            if (mp[i] && mp[elements / i])
            {
                cout << i << ' ' << elements / i << '\n';
                break;
            }
        }
    }

    return 0;
}