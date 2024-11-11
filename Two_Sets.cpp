#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if ((n * (n + 1) / 2) & 1)
        cout << "NO\n";

    else
    {
        cout << "YES\n";
        if (n & 1)
        {
            vector<int> f = {1, 2}, s = {3};
            for (int i = 4; i < n; i += 4)
            {
                f.push_back(i);
                f.push_back(i + 3);
                s.push_back(i + 1);
                s.push_back(i + 2);
            }

            cout << f.size() << '\n';
            for (int i : f)
                cout << i << ' ';
            cout << '\n';

            cout << s.size() << '\n';
            for (int i : s)
                cout << i << ' ';
            cout << '\n';
        }

        else
        {
            vector<int> f, s;
            for (int i = 1; i <= n / 2; i += 2)
            {
                f.push_back(i);
                f.push_back(n - i + 1);
                s.push_back(i + 1);
                s.push_back(n - i);
            }

            cout << f.size() << '\n';
            for (int i : f)
                cout << i << ' ';
            cout << '\n';

            cout << s.size() << '\n';
            for (int i : s)
                cout << i << ' ';
            cout << '\n';
        }
    }

    return 0;
}