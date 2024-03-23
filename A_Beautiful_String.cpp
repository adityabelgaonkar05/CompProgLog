#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() 
{
  int t; cin >> t;

  while(t--)
  {
    string s, new_s; cin >> s;
    
    for(int i = 1; i < s.size()-1; ++i)
    {
        if(s[i] == '?')
        {
            char tocheck = s[i-1];
            if(tocheck == '?')
            {
                tocheck = *new_s.end();

                    if(tocheck == 'a' && s[i+1] == 'b')
                    {
                        new_s.push_back('c');
                    }

                    else if(tocheck == 'a' && s[i+1] == 'c')
                    {
                        new_s.push_back('b');
                    }

                    else
                    {
                        if(tocheck == 'a')
                        {
                            new_s.push_back('b');
                        }

                        else if(tocheck == 'b')
                        {
                            new_s.push_back('c');
                        }

                        else
                        {
                            new_s.push_back('a');
                        }
                    }
                }

                else
                {
                    if(tocheck == 'a' && s[i+1] == 'b')
                    {
                        new_s.push_back('c');
                    }

                    else if(tocheck == 'a' && s[i+1] == 'c')
                    {
                        new_s.push_back('b');
                    }

                    else
                    {
                        if(tocheck == 'a')
                        {
                            new_s.push_back('b');
                        }

                        else if(tocheck == 'b')
                        {
                            new_s.push_back('c');
                        }

                        else
                        {
                            new_s.push_back('a');
                        }
                    }
                }
            }

            else new_s.push_back(s[i]);
        }

        cout << new_s << endl;
    }
}