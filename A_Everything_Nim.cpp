#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int currval = 0;
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        sort(a.begin(), a.end());
        
        string pos = "Bob";
        for(int i = 0; i < n; ++i)
        {
            a[i] -= currval;
            if(a[i] == 1) 
            {
                currval++;
                if(pos == "Alice") pos = "Bob";
                else pos = "Alice";
                
            }

            else if(a[i] > 1)
            {
                if(pos == "Alice") pos = "Bob";
                else pos = "Alice";
                break;
            }
        }

        cout << pos << endl;
    }

    return 0;
}