#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  string s;
  cin >>s;
  int ct = 0;
  rep(i,3) {
    if(s[i] == '1') {
      ct++;
    } 
  }

  cout << ct << endl;
}