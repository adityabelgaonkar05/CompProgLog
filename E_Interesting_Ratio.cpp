#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void SieveOfEratosthenes(int n, vector<int> &acprimes)
{
    vector<bool> prime(n + 1, true); // wasnt sure if 1e7 will work, turns out it does
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p])
        {
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            acprimes.push_back(i);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> acprimes;
    SieveOfEratosthenes(1e7, acprimes);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i : acprimes)
        {
            if (i > n)
                break;
            ans += (n / i);
        }

        cout << ans << '\n';
    }

    return 0;
}
