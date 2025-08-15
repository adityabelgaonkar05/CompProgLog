#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, n;
    cin >> a >> n;

    int sum = 0;

    for (int half = 1;; ++half)
    {
        string s = to_string(half);
        string r = s.substr(0, s.size() - 1);
        reverse(r.begin(), r.end());
        int x = stoll(s + r);
        if (x > n)
            break;

        string b = "";
        int temp = x;
        while (temp)
        {
            b += char('0' + temp % a);
            temp /= a;
        }
        reverse(b.begin(), b.end());
        if (b == string(b.rbegin(), b.rend()))
            sum += x;
    }

    for (int half = 1;; ++half)
    {
        string s = to_string(half);
        string r = s;
        reverse(r.begin(), r.end());
        int x = stoll(s + r);
        if (x > n)
            break;

        string b = "";
        int temp = x;
        while (temp)
        {
            b += char('0' + temp % a);
            temp /= a;
        }
        reverse(b.begin(), b.end());
        if (b == string(b.rbegin(), b.rend()))
            sum += x;
    }

    cout << sum << '\n';
    return 0;
}