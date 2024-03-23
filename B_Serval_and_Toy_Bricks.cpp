#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n, m, h; cin >> n >> m >> h;
    vector<int> side(m), front(n);
    vector<vector<int>> top;
    for(int i = 0; i < m; ++i) cin >> side[i];
    for(int i = 0; i < n; ++i) cin >> front[i];
    for(int i = 0; i < n; ++i)
    {
        vector<int> temp(m);
        for(int j = 0; j < m; ++j)
        {
            cin >> temp[j];
        }
        top.push_back(temp);
    }

    vector<vector<int>> answer;

    for(int i = 0; i < n; ++i)
    {
        vector<int> t(m);
        for(int j = 0; j < m; ++j)
        {
            if(top[i][j] == 1 && side[j] <= front[i]) 
            {
                t[j] = (side[j]);
            }

            else if(top[i][j] == 1) t[j] = 1;

            else t[j] = 0;
        }
        answer.push_back(t);
    }

    for(int i = 0; i < n; ++i)
    {
        if(*max_element(answer[i].begin(), answer[i].end()) != front[i])
        {
            for(int j = 0; j < m; ++j)
            {
                if(answer[i][j] == 1)
                {
                    answer[i][j] = front[i];
                    break;
                }
            }
        }
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j) cout << answer[i][j] << " ";
        cout << endl;
    }

    return 0;
}