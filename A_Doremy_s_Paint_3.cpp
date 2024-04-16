#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin  >> n;
        int count1 = 0, count2 = 0;
        map<int , int> mp;
        while(n--) 
        {
            int temp; cin >> temp;
            mp[temp]++;
        }

        if(mp.size() > 2) cout << "No" << endl;
        else if(mp.size() == 2)
        {
            for(auto x : mp)
            {
                if(count1) count2 = x.second;
                else count1 = x.second;
            }

            if(abs(count1 - count2) > 1) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
        else cout << "Yes" << endl;
    }

    return 0;
}