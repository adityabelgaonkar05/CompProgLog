#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

int squareroot(int n)
{
    int l = 1, r = n;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (mid * mid == n)
            return mid;
        else if (mid * mid < n)
        {
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    return 0;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int aintob;
    cout << "? 1 2" << endl;
    cin >> aintob;
    int aintoc;
    cout << "? 1 3" << endl;
    cin >> aintoc;
    int dintoe;
    cout << "? 4 5" << endl;
    cin >> dintoe;
    int dintof;
    cout << "? 4 6" << endl;
    cin >> dintof;

    set<int> s({42, 23, 16, 15, 8, 4});

    // a * b
    // a * c

    // a * b * a * c;

    vector<int> ans(6);

    for (auto i : s)
    {
    }

    return 0;
}