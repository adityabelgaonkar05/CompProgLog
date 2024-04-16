#include<bits/stdc++.h>
#define ab adityabelgaonkar
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        string news = "";
        news.push_back(s[0]);
        news.push_back(s[1]);
        if(news == "00") cout << "12" << s[2] << s[3] << s[4] << " AM" << endl;
        else if(stoi(news) < 12) cout << s << " AM" << endl;
        else if(stoi(news) == 12) cout << s << " PM" << endl;
        else if(stoi(news) >= 13 && stoi(news) < 22) cout << 0 << to_string(stoi(news) - 12) + s[2] + s[3] + s[4] << " PM" << endl;
        else if(stoi(news) >= 13) cout << to_string(stoi(news) - 12) + s[2] + s[3] + s[4] << " PM" << endl;
    }

    return 0;
}