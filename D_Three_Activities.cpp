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
        int n; cin >> n;
        vector<int> a(n), b(n), c(n), d;
        for(auto &i : a) {cin >> i; d.push_back(i);}
        for(auto &i : b) {cin >> i; d.push_back(i);}
        for(auto &i : c) {cin >> i; d.push_back(i);}

        int firstmax, secondmax, thirdmax, ans = 0;
        firstmax = max_element(d.begin(), d.end()) - d.begin();

        if(firstmax < n)
        {
            b[firstmax] = -1;
            c[firstmax] = -1;

            vector<int> newarr(b.begin(), b.end());
            for(int i : c) newarr.push_back(i);

            secondmax = max_element(newarr.begin(), newarr.end()) - newarr.begin();

            if(secondmax < n) 
            {
                c[secondmax] = -1;
                thirdmax = max_element(c.begin(), c.end()) - c.begin();
                ans = a[firstmax] + b[secondmax] + c[thirdmax];
            }

            else
            {
                b[secondmax % n] = -1;
                thirdmax = max_element(b.begin(), b.end()) - b.begin();
                ans = a[firstmax] + b[thirdmax] + c[secondmax % n];
            }
        }

        else if(firstmax < 2 * n)
        {
            a[firstmax % n] = -1;
            c[firstmax % n] = -1;

            vector<int> newarr(a.begin(), a.end());
            for(auto i : c) newarr.push_back(i);

            secondmax = max_element(newarr.begin(), newarr.end()) - newarr.begin();
            if(secondmax < n)
            {
                c[secondmax] = -1;
                thirdmax = max_element(c.begin(), c.end()) - c.begin();
                cout << c[thirdmax] << ' ';
                ans = a[secondmax] + b[firstmax % n] + c[thirdmax];
            }

            else 
            {
                a[secondmax % n] = -1;
                thirdmax = max_element(a.begin(), a.end()) - a.begin();
                ans = a[thirdmax] + b[firstmax % n] + c[secondmax % n];
            }
        }
        
        else 
        {
            a[firstmax % n] = -1;
            b[firstmax % n] = -1;

            vector<int> newarr(a.begin(), a.end());
            for(int i : b) newarr.push_back(i);

            secondmax = max_element(newarr.begin(), newarr.end()) - newarr.begin();
            if(secondmax < n)
            {
                b[secondmax] = -1;
                thirdmax = max_element(b.begin(), b.end()) - b.begin();
                ans = a[secondmax] + b[thirdmax] + c[firstmax % n];
            }

            else
            {
                a[secondmax % n] = -1;
                thirdmax = max_element(a.begin(), a.end()) - a.begin();
                ans = a[thirdmax] + b[secondmax % n] + c[firstmax % n];
            }
        }
        
        cout << ans << '\n';
    }

    return 0;
}