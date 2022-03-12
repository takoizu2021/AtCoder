#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;
int main() {
  int n;
  cin>>n;
  vector<int> a(n),b(n);
  rep(i,n) cin>>a[i];
  rep(i,n) cin>>b[i];
  
  int ans1=0, ans2=0;
  rep(i,n) if(a[i]==b[i]) ++ans1;  
  
  rep(i,n) rep(j,n) if(i!=j && a[i]==b[j]) ++ans2;
  
  cout<<ans1<<endl;
  cout<<ans2<<endl;
}