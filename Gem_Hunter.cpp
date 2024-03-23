#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
    cin >> t;
    vector<long long> gems;

    for(int _ = 0; _ < t; ++_)
    {
        cin >> n;

        for(int i = 0; i < n; ++i)
        {
            cin >> gems[i];
        }

        long long biggem = *max_element(gems.begin(), gems.end());

        cout << biggem << endl;
    }
}