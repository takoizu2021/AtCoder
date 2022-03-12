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
  
  string ans = "";
  while(k) {
    if(k&1) ans = "2"+ans;
    else ans = "0"+ans;
    k >>= 1;
    //cout<<k<<endl;
  }
  
  cout<<ans<<endl;  
}