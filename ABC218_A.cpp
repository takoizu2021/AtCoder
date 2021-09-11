#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
using ll = long long;
//for (int tmp = 0; tmp < (1 << ビット数); tmp++) {
//bitset<ビット数> s(tmp);
//  // (ビット列sに対する処理)
//}

int main() {
  int n;
  string s;
  cin>>n>>s;
  
  string ans="Yes";
  if(s[n-1]=='x') ans="No";
  
  cout<<ans<<endl;
}