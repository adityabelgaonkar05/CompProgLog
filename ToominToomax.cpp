#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; ++i) cin >> a[i];

        int i = *max_element(a.begin(), a.end());
        a.erase(max_element(a.begin(), a.end()));
        int j = *min_element(a.begin(), a.end());
        a.erase(min_element(a.begin(), a.end()));
        int k = *max_element(a.begin(), a.end());
        a.erase(max_element(a.begin(), a.end()));
        int l = *min_element(a.begin(), a.end());

        cout << abs(i - j) + abs(j - k) + abs(k - l) + abs(l - i) << endl;
    }

    return 0;
}