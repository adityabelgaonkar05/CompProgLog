#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int longest = 0, curr = 0;

        while(n--) 
        {
            int element; cin >> element;
            if(element == 0) longest = max(longest, ++curr);
            else curr = 0;
        }

        cout << longest << endl;
    }

    return 0;
}