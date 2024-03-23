#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int m;
    int max_val = 0;
    int score = 0;
    
    cin >> s;
    cin >> m;
    
    for(int i = 0; i < s.size(); ++i)
    {
        score += (int)s[i] - 96;
    
        if((int)s[i] - 96 >max_val)
        {
            max_val = (int)s[i] - 96;
        }
    }
    
    cout << score + max_val * (m-1);
    
    return 0;
}