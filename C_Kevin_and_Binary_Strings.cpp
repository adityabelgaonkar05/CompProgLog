#include <bits/stdc++.h>
#define int long long
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
        string s;
        cin >> s;
        int n = s.size();
        int firstzero = -1;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
            {
                firstzero = i;
                break;
            }
        }

        if (firstzero == -1)
        {
            cout << "1 1 1 " << s.size() << '\n';
        }

        else
        {
            int neededsize = s.size() - firstzero;
            string maxs = "";
            for (int i = 0; i < neededsize; ++i)
            {
                maxs.push_back('0');
            }
            int l = 0, r = neededsize;

            for (int i = 0; i < n - neededsize; ++i)
            {
                string curr = "";
                for (int j = i; j < i + neededsize; ++j)
                {
                    if (s[j] != s[j - i + firstzero])
                    {
                        curr.push_back('1');
                    }

                    else
                        curr.push_back('0');
                }

                if (maxs < curr)
                {
                    maxs = curr;
                    l = i;
                    r = i + neededsize;
                }
            }

            cout << l + 1 << ' ' << r << " 1 " << n << '\n';
        }
    }

    return 0;
}

// 11011
//   101
// 11110