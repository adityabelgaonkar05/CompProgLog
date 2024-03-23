#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n, dump; cin >> n;
    vector <int> seconds;

    for(int i = 0; i < n*2; ++i)
    {
        if(i%2)
        {
            int element;
            cin >> element;
            seconds.push_back(element);
        }

        else cin >> dump;
    }

    int page, chpcount = 0; cin >> page;
    for(auto x : seconds) if(page > x) chpcount++;

    cout << n-chpcount << endl;
}