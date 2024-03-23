#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n; cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) mp[a[i]]++;
    for(int i = 0; i < n; i++) mp[b[i]]++;

    if(mp.size() == 1)
    {
        cout << "-1\n";
        return 0;
    }
    
    else
    {
        vector<int> c = a;
        vector<int> d = b;

        while(accumulate(a.begin(), a.end(), 0) == accumulate(b.begin(), b.end(), 0) && accumulate(c.begin(), c.end(), 0) == accumulate(d.begin(), d.end(), 0))
        {
            int e = a[n-1], f = b[n-1];
            a.pop_back();
            b.pop_back();
            a.insert(a.begin(), f);
            b.insert(b.begin(), e);

            e = c[0]; f = d[0];
            c.erase(c.begin());
            d.erase(d.begin());
            c.push_back(f);
            d.push_back(e);
        }

        if(accumulate(a.begin(), a.end(), 0) != accumulate(b.begin(), b.end(), 0))
        {
            for(int i = 0; i < n; i++) cout << a[i] << " ";
            for(int i = 0; i < n; i++) cout << b[i] << " ";
        }

        else
        {
            for(int i = 0; i < n; i++) cout << c[i] << " ";
            for(int i = 0; i < n; i++) cout << d[i] << " ";
        }
    }    

    return 0;
}