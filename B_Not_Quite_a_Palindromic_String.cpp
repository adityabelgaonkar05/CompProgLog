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
        string s;
        cin >> s;

        int zerog = 0;
        int oneg = 0;

        // k such indices that have same n - i - 1 character

        cout << s << '\n';

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
                oneg++;
            else
                zerog++;
        }

        if (oneg + zerog == k)
            cout << "YES\n";
        else
        {
            if (zerog >= oneg)
            {
            }
        }
    }

    return 0;
}