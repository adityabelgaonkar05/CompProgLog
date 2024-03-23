#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        bool ex5 = 0, ex2 = 0, ex7 = 0, ex10 = 0, ex20 = 0;
        for(int i = s.size()-1; i >= 0; --i)
        {
            if(s[i] == '0')
            {
                if(ex10)
                {
                    ex20 = 1;
                    break;
                }
                ex10 = 1;
            }

            else if(s[i] == '5')
            {
                ex5 = 1;
                if(ex10) break;
            }

            else if(s[i] == '7' && ex5)
            {
                ex7 = 1;
                break;
            }

            else if(s[i] == '2' && ex5)
            {
                ex2 = 1;
                break;
            }
        }

        // cout << ex20 << " " << ex5 << " " << ex2 << " " << ex7 << endl;

        string news = s; reverse(news.begin(), news.end());
        if(ex20)
        {
            bool foundz = 0;
            for(int i = 0; i < news.size(); ++i)
            {
                if(s[i] == '0')
                {
                    if(foundz)
                    {
                        cout << i-1 << "ye" << endl;
                        break;
                    }

                    else foundz = 1;
                }
            }
        }

        else if(ex2)
        {
            bool found5 = 0;
            for(int i = 0; i < news.size(); ++i)
            {
                if(s[i] == '5' || s[i] == '2')
                {
                    if(found5 && s[i] == '2')
                    {
                        cout << i-1 << endl;
                        break;
                    }

                    else if(s[i] == '5') found5 = 1;
                }
            }
        }

        else if(ex7)
        {
            bool found5 = 0;
            for(int i = 0; i < news.size(); ++i)
            {
                if(s[i] == '5' || s[i] == '7')
                {
                    if(found5 && s[i] == '7')
                    {
                        cout << i-1 << endl;
                        break;
                    }

                    else if(s[i] == '5') found5 = 1;
                }
            }
        }

        else if(ex5)
        {
            bool foundz = 0;
            for(int i = 0; i < news.size(); ++i)
            {
                if(s[i] == '0' || s[i] == '5')
                {
                    if(foundz && s[i] == '5')
                    {
                        cout << i-1 << endl;
                        break;
                    }

                    else if(s[i] == '0') foundz = 1;
                }
            }
        }

        else cout << "not work" << endl;
    }

    return 0;
}