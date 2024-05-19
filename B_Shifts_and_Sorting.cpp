#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        string a; cin >> a;
        int n = a.size();
        int count0 = 0, count1 = 0;
        int shifts = 0;
        bool flag = 0;
        for(int i = 0; i < n; ++i)
        {
            if(a[i] == '1') flag = 1;

            if(count0 && a[i] == '1') 
            {
                shifts += (count1+1)*count0;
                count0 = 0;
            }

            if(flag)
            {
                if(a[i] == '1') count1++;
                if(a[i] == '0') count0++;
            }
        }

        shifts += (count1+1)*count0;
        
        cout << shifts << "\n";
    }

    return 0;
}