#include<bits/stdc++.h>
#define int long long
#define ab adityabelgaonkar
using namespace std;

int vowels(string &s, int curri, int c)
{
    if(s.size() == curri) return c;
    else if(tolower(s[curri]) == 'a' or tolower(s[curri]) == 'e' or tolower(s[curri]) == 'i' or tolower(s[curri]) == 'o' or tolower(s[curri]) == 'u')
    {
        return vowels(s, curri+1, c+1);
    }
    else return vowels(s, curri+1, c);
}

int32_t main()
{
    string s; getline(cin, s);
    cout << vowels(s, 0, 0);

    return 0;
}