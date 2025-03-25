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
        int a, b, k;
        cin >> a >> b >> k;
        string s = "";

        if (min(a, b) == 0)
        {
            if (max(a, b) > k)
            {
                cout << -1 << '\n';
            }
            else
            {
                if (a > b)
                {
                    for (int i = 0; i < a; ++i)
                        cout << '0';
                    cout << '\n';
                }
                else
                {
                    for (int i = 0; i < a; ++i)
                        cout << '1';
                    cout << '\n';
                }
            }
            continue;
        }

        if (a > b)
        {
            int curr = 1;
            int tocheck = (a + b - 1) / b;
            for (int i = 0; i < a + b; ++i)
            {
                if (curr >= tocheck)
                {
                    s.push_back('1');
                    curr = 0;
                }
                else
                {
                    s.push_back('0');
                    curr++;
                }
            }
            int count = 0;
            bool valid = true;
            for (char c : s)
            {
                if (c == '0')
                    count++;
                else
                    count = 0;
                if (count > k)
                {
                    valid = false;
                    break;
                }
            }
            if (!valid)
            {
                cout << -1 << '\n';
                continue;
            }
        }
        else
        {
            int curr = 1;
            int tocheck = (a + b - 1) / a;
            for (int i = 0; i < a + b; ++i)
            {
                if (curr >= tocheck)
                {
                    s.push_back('0');
                    curr = 0;
                }
                else
                {
                    s.push_back('1');
                    curr++;
                }
            }
            int count = 0;
            bool valid = true;
            for (char c : s)
            {
                if (c == '1')
                    count++;
                else
                    count = 0;
                if (count > k)
                {
                    valid = false;
                    break;
                }
            }
            if (!valid)
            {
                cout << -1 << '\n';
                continue;
            }
        }

        int c1 = count(s.begin(), s.end(), '1');
        int c0 = count(s.begin(), s.end(), '0');

        if (c1 < b)
        {
            for (int i = s.size() - 1; i >= 0; --i)
            {
                if (s[i] == '0')
                {
                    s[i] = '1';
                    break;
                }
            }
        }

        if (c0 < a)
        {
            for (int i = s.size() - 1; i >= 0; --i)
            {
                if (s[i] == '1')
                {
                    s[i] = '0';
                    break;
                }
            }
        }

        cout << s << '\n';
    }

    return 0;
}
