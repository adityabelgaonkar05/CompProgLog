#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int32_t main()
{
    string s; cin >> s;
    map<char, int> mp;
    
    for(auto x : s)
    {
        mp[x]++;
    }

    int count = 0;

    for(auto x : mp)
    {
        if(x.second%2)
        {
            count++;
            if(count >= 2) break;
        }
    }

    pair <char, int> oddletter;

    if(count >= 2) cout << "NO SOLUTION" << endl;
    else
    {
        string news(s.size(), '%');
        int n = news.size(), mid = n/2, i = 0;

        for(auto x : mp)
        {
            if(x.second%2) 
            {
                for(int j = 0; j <= x.second/2; ++j)
                {
                    news[mid+j] = x.first;
                    news[mid-j] = x.first;
                }
            }

            else
            {
                while(x.second)
                {
                    news[i] = x.first;
                    news[n-i-1] = x.first;
                    i++;
                    x.second-=2;
                }
            }
        }

        cout << news;
    }

    return 0;
}