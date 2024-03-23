#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n, a, b; cin >> n >> a >> b;
    int sum = 0;
    vector<int> s(n);
    bool cond = true;
    int index = 0;

    for(int i = 0; i < n; ++i) cin >> s[i];

    int towater = s[0];
    sum += s[0];
    
    for(int i = 1; i < n; i++)
    {
        sum += s[i];
        
        if(floor(towater/(double)sum * a) < b) 
        {
            index = n - i;
            break;
        }
    }

    cout << index << endl;

    return 0;
}