#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{   
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        sort(a.begin(), a.end());
        int mid = n%2 ? n/2 : (n-1)/2;
        int firstoc = n;

        for(int i = mid + 1; i < n; ++i)
        {
            if(a[i] > a[mid]) 
            {
                firstoc = i;
                break;
            }
        }

        cout << firstoc - mid << endl;
    }

    return 0;
}