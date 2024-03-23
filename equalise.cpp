#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        vector<int> vec;
        cin >> n;
        int element;

        for(int i = 0; i < n; ++i)
        {
            cin >> element;
            vec.push_back(element);
        }

        sort(vec.begin(), vec.end());

        int toAdd = n;

        for(int i = 0; i < n; ++i)
        {
            vec[i] += toAdd;
            toAdd--;
        }

        for(auto y : vec)
        {
            cout << y << " ";
        }

        unordered_map<int, int> mp;

        for(int i = 0; i < n; ++i)
        {
            if (mp.find(vec[i]) == mp.end()) {
                mp[vec[i]] = 1;
            }

            else 
            {
                mp[vec[i]]++;
            }
        }

        int max_freq = 0;

        for(auto x : mp)
        {
            if(x.second > max_freq)
            {
                max_freq = x.second;
            }
        }

        cout << "Answer : " << max_freq << endl;
    }
}