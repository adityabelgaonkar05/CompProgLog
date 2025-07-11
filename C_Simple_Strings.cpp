#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n - 2; ++i)
    {
        if (s[i] == s[i + 1])
        {
            if (s[i] == 'a')
            {
                if (s[i + 2] == 'b')
                    s[i + 1] = 'c';
                else
                    s[i + 1] = 'b';
            }
            else
            {
                if (s[i + 2] == 'a')
                {
                    if (s[i] == 'b')
                        s[i + 1] = 'c';
                    else
                        s[i + 1] = 'b';
                }
                else
                    s[i + 1] = 'a';
            }
        }
    }

    if (s.size() >= 2)
    {
        if (s.back() == s[n - 2])
        {
            if (s[n - 2] == 'a')
                s[n - 1] = 'b';
            else
                s[n - 1] = 'a';
        }
    }

    cout << s << '\n';

    return 0;
}