#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n), b(n);

        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        // sort(a.begin(), a.end());
        // sort(b.begin(), b.end());

        for(int i = 0; i < n-k*2; ++i)
        {
            int sum1 = a[i], sum2 = a[i];

            for(int j = i+1; j < i + k*2; ++j)
            {
                sum1 = sum1 ^ a[j];
                sum2 += sum2 ^ a[j];
            }

            if(sum1 == sum2) 
            {
                for(int j = i; j <= i + k*2; ++j)
                {
                    cout << a[j] << " ";
                }    
                cout << endl;
                for(int j = i; j <= i + k*2; ++j)
                {
                    cout << b[j] << " ";
                }  

                break;
            }
        }
    }

    return 0;
}