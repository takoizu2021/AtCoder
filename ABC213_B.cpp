#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;
//long longŒ^‚Ì10i”‚ðstringŒ^‚Ì2i”‚É•ÏŠ·‚·‚é
string tob(long long x) {
  string r;  
  while(x!=0) {
    r +=(x%2==0? "0":"1");
    x/=2;
  }  
  reverse(r.begin(),r.end());
  return r;
}

int main() {
  int n;
  cin>>n;
  
  vector<pair<int,ll> > a(n);
  rep2(i,1,n+1) {
    int v;
    cin>>v;
    a[i-1] = make_pair(v,i);
  }
  
  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());
  
  int k;
  ll vol;
  tie(vol,k) = a[1];  
  int ans=k;
  
  cout<<ans<<endl;  
}