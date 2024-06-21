#include <bits/stdc++.h>
#define ab adityabelgaonkar
#define int long long
using namespace std;

int maxsofar = 0;

void maxFinalValue(vector<int> &a, int i, int curr) 
{
    if(i == a.size()) return;
    else if(i == a.size()-1)
    {
        maxsofar = max(maxsofar, max(abs(curr + a[i]), curr + a[i]));
    }
    else 
    {
        maxFinalValue(a, i+1, curr + a[i]);
        maxFinalValue(a, i+1, abs(curr + a[i]));
    }
}

signed main() 
{
    int t; cin >> t;
    
    while (t--)
    {
        int n; cin >> n;
        
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        
        maxFinalValue(a, 0, 0);

        cout << maxsofar << '\n';
        maxsofar = INT_MIN;
    }
    
    return 0;
}
