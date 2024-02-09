#include <bits/stdc++.h>
using namespace std;

int main() {
  int size;
  cin >> size;

  string s;
  cin >> s;

  int S = 0;
  int F = 0;

  for(int i = 0; i < size-1; ++i)
  {
      if(s[i] == 'S' && s[i+1] == 'F')
      {
        S++;
      }
      else if(s[i] == 'F' && s[i+1] == 'S')
      {
        F++;
      }
  }

  if(S>F)
  {
    cout << "YES";
  }

  else
  {
    cout << "NO";
  }
}