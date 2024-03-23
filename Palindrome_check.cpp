#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        int oddcount = 0;
        int count = 0;
        bool isPalindrome = 1;

        sort(s.begin(), s.end());   
        
        for(int i = 0; i < s.size()-1; ++i)
        {
            if(s[i] == s[i+1])
            {
                count++;
            }
            else
            {   
                if(count % 2 == 1 && oddcount == 0)
                {
                    oddcount = 1;
                }
                else
                {
                    isPalindrome = 0;
                }
            }
        }

        if(isPalindrome)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}