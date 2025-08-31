#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

vector<int> sieve(int n)
{
    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {

            // marking as false
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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> primes = sieve(1000);

    int t;
    cin >> t;
    while (t--)
    {
        // make first number of sorted arr even, then rest numbers can always become multiples of that number

        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (auto &i : a)
            cin >> i;

        for (auto &x : primes)
        {
            // check if each number can be made divisible by x by adding k;
        }
    }

    return 0;
}