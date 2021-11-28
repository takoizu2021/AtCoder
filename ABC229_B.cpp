#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;

int main() {
  string a,b;
  cin>>a>>b;
  
  reverse(a.begin(),a.end());
  reverse(b.begin(),b.end());
  int sa=a.size();
  int sb=b.size();
  int n = min(sa,sb);
  string ans="Easy";
  rep(i,n) {
    int ai = a[i]-'0',bi = b[i]-'0';
    if(ai + bi >= 10) ans = "Hard";
  }
  cout<<ans<<endl;
}