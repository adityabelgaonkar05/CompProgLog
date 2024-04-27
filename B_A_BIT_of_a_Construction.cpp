#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;
 
int siz(int n)
{
    int s = 0;
    while(n > 0)
    {
        s++;
        n/=2;
    }
 
    return s;
}
 
int to_decimal(string s)
{
    int n = s.size();
    int ans = 0;
    for(int i = 0; i < n; ++i)
    {
        ans+=pow(2, i);
    }
 
    return ans;
}
 
int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        if(n == 1) cout << k << "\n";
        else
        {
            int s = siz(k);
            string v(s-1, '1');
            cout << to_decimal(v) << " ";
            cout << k - to_decimal(v) << " ";
            for(int i = 0; i < n - 2; ++i) cout << 0 << " ";
            cout << "\n";
        }
    }
 
    return 0;
}