#include <bits/stdc++.h>
using namespace std;

bool notPalindrome(string s)
{
    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());

    if(reverse_s == s)
    {
        return false;
    }

    else
    {
        return true;
    }
}

int countNotPalindrome(string s)
{
    vector<string> vec;
    string subs = "";

    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == ' ' || s[i] == '.')
        {
            vec.push_back(subs);
            subs = "";
        }

        else
        {
            subs += s[i];
        }
    }
    
    vec.push_back(subs);

    int count = 0;

    for(string x : vec)
    {
        if(notPalindrome(x))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string input;
    getline(cin, input);

    cout << countNotPalindrome(input);
}