#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int log_a_to_base_b(int a, int b) //TEMPLATE
{
    double p = log2((double)a) / log2((double)b);
    if(p - (int)p == 0)
    {
        return (int)p + 1;
    }

    else return ceil(p);
}

int32_t main()
{
    vector<int> prec(2 * (int)1e5 + 10);
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    for(int i = 1; i < 2 * (int)1e5 + 3; ++i)
    {
        prec[i] = log_a_to_base_b(i, 3);
    }
    
    int t; cin >> t;
    while(t--)
    {
        int l, r; cin >> l >> r;
        int ans = 0;
        int factor = 0;
        int temp = l;
        int anothertemp = l + 1;

        factor += prec[l];
        anothertemp = anothertemp * pow(3, factor);

        // cout << factor << ' ';
        if(anothertemp > 2 * (int)1e5 + 2) factor += log_a_to_base_b(anothertemp, 3);
        else factor += prec[anothertemp];
        // cout << factor << " ";

        ans += factor;

        for(int i = l + 2; i <= r; ++i)
        {
            ans += prec[i];
            // cout << log_a_to_base_b(i, 3) << ' ';
        }

        cout << ans << '\n';

    }

    return 0;
}