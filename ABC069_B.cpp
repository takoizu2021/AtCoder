#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  string s;
  cin >> s;
  
  int i = s.size() - 2;
  cout << s[0] << i << s[s.size() - 1] << endl;
}