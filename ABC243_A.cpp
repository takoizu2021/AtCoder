#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9+1000; //10^9
using ll = long long;
int main() {
  int v,a,b,c;
  cin>>v>>a>>b>>c;
  
  string ans = "";
  if(v>=a+b+c) v %= a+b+c;
  //cout<<v<<endl;
  
  if(v<a) ans = "F";
  else if(v<a+b) ans = "M";
  else if(v<a+b+c) ans = "T";
  
  cout<<ans<<endl;
}