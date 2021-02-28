#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  string s;
  cin >> s;
  
  rep(i,s.size()) {
    if(i == 0 || i % 2 == 0) {
      cout << s[i];
      if(i == s.size() - 1) {
        cout << endl; 
      }
    }
  }
  
}