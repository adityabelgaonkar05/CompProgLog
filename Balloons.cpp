#include <bits/stdc++.h>
#define int long long
using namespace std;
int te5 = 2e5;

int sum(int n)
{
    return n*(n+1)/2;
}

int32_t main()
{
    vector<int> hash(te5, -1);
    vector<int> freq(te5, -1);
    map<int, int> nmp, mp;
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i : a) {cin >> i; mp[i]++;}
    
    for(int j = 0; j < n; ++j)
    {
        if(hash[a[j]] != -1) cout << hash[a[j]] << endl;
        else if(freq[mp[a[j]]] != -1) cout << freq[mp[a[j]]] << endl;
        else 
        {
            int total = 0;
            for(auto i : mp) 
            {
                if(i.first != a[j]) total += sum(i.second -1);
                else total += sum(i.second-2);
            }

            cout << total << endl;
            freq[mp[a[j]]] = total;
            hash[a[j]] = total;
        }
    }

    return 0;
}