#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
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
        vector<int> a(n, 1);

        int turn = 0;

        bool cond = 1;

        while (cond)
        {
            int firstel = -1;

            for (int i = 0; i < n; ++i)
            {
                if (a[i])
                {
                    a[i] = 0;
                    firstel = i;
                    break;
                }
            }

            if (firstel == -1)
            {
                turn = 0;
                break;
            }

            // cout << "H";

            int secondel = -1;

            for (int i = n - 1; i > firstel; --i)
            {
                if (a[i] && (i + firstel) % 4 == 3)
                {
                    a[i] = 0;
                    secondel = i;
                    break;
                }
            }

            if (secondel == -1)
            {
                turn = 1;
                break;
            }
        }

        if (turn)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }

    return 0;
}