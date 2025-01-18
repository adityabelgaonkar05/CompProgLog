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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        int sum1 = 0;
        int sum2 = 0;
        int neg = 0;
        int pos = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i])
            {
                if (a[i] > b[i])
                {
                    sum1 += a[i];
                }

                else
                {
                    sum2 += b[i];
                }
            }

            else
            {
                if (a[i] == -1)
                {
                    neg++;
                }

                else if (a[i] == 1)
                {
                    pos++;
                }
            }
        }

        if (sum1 < sum2)
        {
            int temp = sum1;
            sum1 = min(sum1 + pos, sum2);
            if (sum1 == sum2)
            {
                pos -= sum2 - temp;
                sum1 += pos / 2;
                sum2 += pos / 2 + (pos & 1);
            }

            else
            {
                pos = 0;
            }

            temp = sum2;
            sum2 = max(sum2 - neg, sum1);
            if (sum2 == sum1)
            {
                neg -= abs(temp - sum1);
                sum1 -= neg / 2;
                sum2 -= neg / 2 + (neg & 1);
            }

            else
            {
                neg = 0;
            }
        }

        else
        {
            int temp = sum2;
            sum2 = min(sum2 + pos, sum1);
            if (sum1 == sum2)
            {
                pos -= sum1 - temp;
                sum2 += pos / 2;
                sum1 += pos / 2 + (pos & 1);
            }

            else
            {
                pos = 0;
            }

            temp = sum1;
            sum1 = max(sum1 - neg, sum2);
            if (sum1 == sum2)
            {
                neg -= abs(temp - sum2);
                sum2 -= neg / 2;
                sum1 -= neg / 2 + (neg & 1);
            }

            else
            {
                neg = 0;
            }
        }

        cout << min(sum1, sum2) << '\n';
    }

    return 0;
}