#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define ab adityabelgaonkar
using namespace std;

int lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int temp = n;
        map<int, int> mp;
        while(n)
        {
            if(n % 10) mp[n % 10]++;
            n/=10;
        }
        int elcm  = 1;
        for(auto i : mp)
        {
            elcm = lcm(elcm, i.first);
        }

        if(temp % elcm == 0) cout << temp << '\n';
        else
        {
            int factor = temp / elcm + 1;
        }
    }

    return 0;
}