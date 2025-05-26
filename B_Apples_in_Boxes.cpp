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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int sum = accumulate(a.begin(), a.end(), 0ll);

        sort(a.begin(), a.end());
        a[n - 1]--;
        sort(a.begin(), a.end());

        if (a.back() - a[0] > k)
        {
            cout << "Jerry\n";
        }
        else
        {
            if (!(sum & 1))
            {
                cout << "Jerry\n";
            }
            else
                cout << "Tom\n";
        }
    }

    return 0;
}