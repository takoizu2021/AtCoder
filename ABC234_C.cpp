#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;
int main() {
  ll k;
  cin>>k;
  
  bitset<64> s(k);
  string ans = "";
  
  for(int id=0; id<64; ++id) {
    if(s.test(id)) ans+="2";
    else ans+="0";
  }
  
  reverse(ans.begin(), ans.end());
  
  while(ans[0] == '0') ans.erase(ans.begin());
  cout<<ans<<endl;  
}