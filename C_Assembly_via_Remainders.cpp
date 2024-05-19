#include <bits/stdc++.h>
#define ab adityabelgaonkar
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> b(n-1);
        for(auto &i : b) cin >> i;

        vector<int> a; 
        a.push_back(int(1e8-1000)); 
        

        for(auto x : b)
        {
            a.push_back(a[a.size()-1] + x);
        }

        for(auto x : a) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
