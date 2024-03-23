#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string bw;
        cin >> bw;
        int index1 = -1, index2 = -1;

        for(int i = 0; i < bw.size(); ++i)
        {
            if(bw[i] == 'B')
            {
               index1 = i;
               break;
            }
        }

        for(int i = bw.size()-1; i>=0; --i)
        {
            if(bw[i] == 'B')
            {
               index2 = i;
               break;
            }
        }

        if(index1 == -1)
        {
            cout << 0 << "\n";
        }

        else if(index1 == index2)
        {
            cout << 1 << "\n";
        }

        else
        {
            cout << index2-index1+1 << "\n";
        }
    }

    return 0;
}