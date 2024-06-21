#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        vector<int> b;
        for(auto &i : a) cin >> i;

        int position = 0;

        for(int i = n-1; i > 0; --i)
        {
            if(a[i] < a[i-1]) {position = i; break;}
        }

        for(int i = 0; i < position; ++i)
        {
            vector<int> temp; int num = a[i];
            while(num)
            {
                temp.push_back(num%10);
                num/=10;
            }

            if(a[i] == 0) temp.push_back(0);

            for(int j = temp.size()-1; j >= 0; --j) b.push_back(temp[j]);
        }

        for(int i = position; i < n; ++i)
        {
            b.push_back(a[i]);
        }

        if(is_sorted(b.begin(), b.end())) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}