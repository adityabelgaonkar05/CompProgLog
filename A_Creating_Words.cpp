#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        string s1, s2; cin >> s1 >> s2;
        swap(s1[0], s2[0]);

        cout << s1 << " " << s2 << "\n";
    }

    return 0;
}