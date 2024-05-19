#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int maxel = *max_element(a.begin(), a.end());
    int minel = *min_element(a.begin(), a.end());
    int secondmax = INT_MIN;
    int secondmin = INT_MAX;

    for(int i = 0; i < n; ++i)
    {
        if(a[i] != maxel) secondmax = max(secondmax, a[i]);
        if(a[i] != minel) secondmin = min(secondmin, a[i]);
    }    

    cout << min(secondmax - minel, maxel - secondmin) << "\n";

    return 0;
}