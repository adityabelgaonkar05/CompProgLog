#include<bits/stdc++.h>
using namespace std;
#define int long long

void testcase() 
{
    string s; int m; cin >> s >> m;
    cout << s.size() << endl;

    vector<int> v(26); 
    for(int i = 0 ; i < 26 ; i++)
    {
        v[i] = i + 1;
    }

    int answer = INT_MIN;

    for(int i = 0 ; i < 26 ; i++)
    {
        v[i] *= m;

        int count = 0;

        for(int j = 0 ; j < s.size() ; j++)
        {
            count += v[s[j] - 'a']; 
        }

        answer = max(answer , count);
        v[i] /= m;
    }

    cout << answer << "\n";
}


int32_t main() 
{

    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int tc = 1;
    //cin >> tc;
    while(tc--) testcase();

    return 0;
}