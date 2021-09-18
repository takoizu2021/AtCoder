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
  int x;
  cin>>x;
  
  int ans;
  if(0<=x&&x<40) ans = 40-x;
  else if(40<=x&&x<70) ans = 70-x;
  else if(70<=x&&x<=90) ans = 90-x;
  if(90<=x) cout<<"expert"<<endl;
  else cout<<ans<<endl;
}