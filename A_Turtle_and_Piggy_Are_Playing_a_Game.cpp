#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int closest(int n)
{
    for(int i = 2; i*i <= n; ++i)
    {
        if(n%i == 0) return i;
    }

    return n;
}

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int l, r; cin >> l >> r;
        if(l != r && r%2) r--;

        int x = r;
        int score = 0;

        while(x > 1)
        {
            score++;
            x /= closest(x);
        } 

        cout << score << "\n";
    }

    return 0;
}