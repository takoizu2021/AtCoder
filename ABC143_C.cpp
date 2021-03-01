#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  string s;
  cin >> n >> s;
  
  int ct = 0;
  rep(i,n) {
    if(s[i] != s[i + 1]) {
      ++ct;
    }
  }  
  cout << ct << endl;
}