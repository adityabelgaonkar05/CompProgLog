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
        int n, k; cin >> n >> k;
        int maxposs = n * (n + 1) / 2 - (n + (n & 1)) / 2;
        if(maxposs < k || (k & 1)) cout << "No" << '\n';
        else 
        {
            cout << "Yes" << '\n';
            vector<int> a(n);
            

            

            else 
            {

            }

            for(int i : a) cout << i << ' ';
            cout << '\n';
        }
    }

    return 0;
}