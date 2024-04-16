#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, c, d; cin >> n >> c >> d;
        vector<int> a(n*n);

        for(int i = 0; i < n*n; i++)
            cin >> a[i];
        
        sort(a.begin(), a.end());

        bool cond = 0;

        vector<vector<int>> b;

        for(int i = 0; i < n; ++i)
        {
            vector<int> temp;
            for(int j = 0; j < n; ++j)
            {
                temp.push_back(a[j]);
            }

            b.push_back(temp);
        }

        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if(i < n-1)
                {
                    if(b[i][j] + c != b[i+1][j])
                    {
                        cond = 1;
                        break;
                    }
                }

                if(j < n-1)
                {
                    if(b[i][j] + d != b[i][j+1])
                    {
                        cond = 1;
                        break;
                    }
                }
            }
        }

        if(cond)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}