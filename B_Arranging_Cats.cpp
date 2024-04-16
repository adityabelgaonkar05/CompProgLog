#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{ 
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        string news; cin >> news;
        int count = 0;
        int sum1 = 0, sum2 = 0;

        for(int i = 0; i < n; ++i)
        {
            sum1+=s[i];
            sum2+=news[i];
            if(s[i] == '0' && news[i] == '1') count++;
        }
        if(sum1 > sum2) count += (sum1- sum2);
        cout << count << endl;
    }

    return 0;
}