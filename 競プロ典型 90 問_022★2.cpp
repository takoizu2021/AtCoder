#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;
//Å‘åŒö–ñ”
ll mygcd(ll A, ll B) {
  if(B == 0) return A;
  else return mygcd(B,A%B);
}

int main() {
  ll a,b,c;
  cin>>a>>b>>c;
  ll mod = mygcd(a,gcd(b,c));
  ll ans = (a/mod-1)+(b/mod-1)+(c/mod-1);
  cout<<ans<<endl;
}