#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

signed main()
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
        int oddexist = 0;
        int evenexist = 0;

        for (auto &i : a)
        {
            cin >> i;
            if (i & 1)
                oddexist = 1;
            else
                evenexist = 1;
        }

        if (oddexist && evenexist)
        {
            sort(a.begin(), a.end());
        }

        for (auto i : a)
            cout << i << " ";
        cout << "\n";
    }

    return 0;
}