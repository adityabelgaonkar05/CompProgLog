#include <bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, l; cin >> a >> b >> l;
        set<int> k;
        
        int tempa = 1;

        while(tempa <= l)
        {
            int tempb = 1;

            while(tempa * tempb <= l)
            {
                if(l%(tempa * tempb) == 0) k.insert(l/(tempa * tempb));
                tempb*=b;
            }

            tempa*=a;
        }

        cout << k.size() << "\n";
    }

    return 0;
}