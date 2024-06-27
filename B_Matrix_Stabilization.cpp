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
        bool cond = 1;
        int n, m; cin >> n >> m;
        vector<vector<int>> a(n, vector<int> (m));

        for(int i = 0; i < n; ++i) 
        {
            for(int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }

        vector<vector<int>> newarr = a;
        
        if(n > 1 && m > 1)
        {
            for(int i = 0; i < n; ++i)
            {
                for(int j = 0; j < m; ++j)
                {
                    if(i == 0)
                    {
                        if(j == 0)
                        {
                            newarr[i][j] = min(a[i][j], max(a[i + 1][j], a[i][j + 1]));
                        }

                        else if(j == m-1)
                        {
                            newarr[i][j] = min(a[i][j], max(a[i][j - 1], a[i + 1][j]));
                        }

                        else 
                        {
                            newarr[i][j] = min(a[i][j], max(a[i + 1][j], max(a[i][j - 1], a[i][j + 1])));
                        }
                    }

                    else if(i == n - 1)
                    {
                        if(j == 0)
                        {
                            newarr[i][j] = min(a[i][j], max(a[i - 1][j], a[i][j + 1]));
                        }

                        else if(j == m-1)
                        {
                            newarr[i][j] = min(a[i][j], max(a[i - 1][j], a[i][j - 1]));
                        }

                        else 
                        {
                            newarr[i][j] = min(a[i][j], max(a[i - 1][j], max(a[i][j - 1], a[i][j + 1])));
                        }
                    }

                    else
                    {
                        if(j == 0)
                        {
                            newarr[i][j] = min(a[i][j], max(a[i][j + 1], max(a[i + 1][j], a[i - 1][j])));
                        }

                        else if(j == m-1)
                        {
                            newarr[i][j] = min(a[i][j], max(a[i][j - 1], max(a[i + 1][j], a[i - 1][j])));
                        }

                        else newarr[i][j] = min(a[i][j], max(max(a[i + 1][j], a[i - 1][j]), max(a[i][j + 1], a[i][j - 1])));
                    }
                }
            }
        }

        else if(n == 1)
        {
            int minel = *min_element(a[0].begin(), a[0].end());
            for(int j = 0; j < m; ++j)
            {
                newarr[0][j] = minel;
            }
        }

        else if(m == 1)
        {
            int minsofar = INT_MAX;
            for(int i = 0; i < n; ++i)
            {
                minsofar = min(minsofar, a[i][0]);
            }

            for(int i = 0; i < n; ++i)
            {
                newarr[i][0] = minsofar;
            }
        }

        a = newarr;

        for(auto i : a)
        {
            for(auto j : i) cout << j << ' ';
            cout << "\n";
        }   
    }

    return 0;
}