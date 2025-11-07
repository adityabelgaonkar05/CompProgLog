#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

vector<int> sieve(int n)
{

    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    vector<int> res;
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            res.push_back(p);
        }
    }
    return res;
}

int smallest_factor(int n, vector<int> &primes)
{
    int ans = 0;

    for (int i = 0; i < primes.size(); ++i)
    {
        if (n % primes[i])
        {
            return primes[i];
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> primes = sieve(1e6);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        // find what is not a prime factor of the smallest number

        int notprime = INT64_MAX;

        for (int i = 0; i < n; ++i)
        {
            notprime = min(notprime, smallest_factor(a[i], primes));
        }

        if (notprime == INT64_MAX)
            cout << "-1\n";
        else
            cout << notprime << "\n";
    }

    return 0;
}