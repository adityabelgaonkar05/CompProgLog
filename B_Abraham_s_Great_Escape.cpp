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
        int n, k;
        cin >> n >> k;

        if (k == (n * n - 1))
        {
            cout << "NO\n";
        }
        else
        {
            int count = 0;

            cout << "YES\n";

            while (count < k)
            {
                for (int i = 0; i < n; ++i)
                {
                    cout << "U";
                    count++;
                    if (count == k)
                        break;
                }

                if (count != k)
                    cout << '\n';

                if (count == k && (k % n) == 0)
                {
                    cout << '\n';
                    break;
                }
                if (count == k && (k % n) && (k < (n * (n - 1))))
                {
                    for (int i = 0; i < (n - (k % n)); ++i)
                    {
                        cout << "D";
                    }

                    cout << '\n';
                }
                else if (count == k && (k % n) && (k > (n * (n - 1))))
                {
                    for (int i = 0; i < (n - (k % n)) - 1; ++i)
                    {
                        cout << "R";
                    }

                    cout << "L";

                    cout << '\n';
                }
            }

            for (int j = (k + (n - 1)) / n; j < n; ++j)
            {
                for (int i = 0; i < n - 1; ++i)
                {
                    cout << "R";
                }
                cout << "L";
                cout << '\n';
            }
        }

        // cout << '\n';
    }

    return 0;
}