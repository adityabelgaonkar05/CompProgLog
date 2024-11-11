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

        sort(a.begin(), a.end());

        bool flag = false;
        int left = 0;
        int right = n - 1;

        while (left < right)
        {
            // cout << a[left] << ' ' << a[right] << '\n';
            if (a[right] - a[left] == k)
            {
                flag = true;
                break;
            }

            if (a[right] - a[left] < k)
                left++;
            else
                right--;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}