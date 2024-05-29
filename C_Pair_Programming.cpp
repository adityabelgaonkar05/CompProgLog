#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std; //10031102

//actually kinda spectacular looking code
//can use only one while loop to solve, reduces tc

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int k, n, m; cin >> k >> n >> m;
        vector<int> a(n), b(m);

        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;

        bool flag = 0;

        vector<int> ans; 

        int pointa = 0;
        int pointb = 0;

        while(pointa < n && pointb < m)
        {
            if(a[pointa] > k) 
            {
                if(b[pointb] > k || (b[pointb] > k && (pointb == m-1))) {flag = 1; break;}
                else
                {
                    if(b[pointb] == 0) k++;
                    ans.push_back(b[pointb]);
                    pointb++;
                }
            }

            else if(b[pointb] > k)
            {
                if(a[pointa] > k || (a[pointa] > k && (pointa == n-1))) {flag = 1; break;}
                else 
                {
                    if(a[pointa] == 0) k++;
                    ans.push_back(a[pointa]);
                    pointa++;
                }
            }

            else
            {
                ans.push_back(min(a[pointa], b[pointb]));
                ans.push_back(max(a[pointa], b[pointb]));
                if(a[pointa] == 0) k++;
                if(b[pointb] == 0) k++;
                pointa++;
                pointb++;
            }
        }

        if(pointa < n)
        {
            for(int i = pointa; i < n; ++i)
            {
                if(a[i] == 0) k++;
                if(a[i] > k) {flag = 1; break;}
                ans.push_back(a[i]);
            }
        }

        if(pointb < m)
        {
            for(int i = pointb; i < m; ++i)
            {
                if(b[i] == 0) k++;
                if(b[i] > k) {flag = 1; break;}
                ans.push_back(b[i]);
            }
        }

        if(flag) cout << -1 << "\n";
        else
        {
            for(auto i : ans) cout << i << " ";
            cout << "\n";
        }
    }

    return 0;
}