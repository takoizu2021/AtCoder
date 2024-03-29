#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //数学関数
using ll = long long;

int main() {
  int n,k;
  cin>>n>>k;
  
  vector<ll> c(n);
  rep(i,n) cin>>c[i];
  
  map<ll,int> s;//ci, 個数
  
  for(int i=0; i<k; i++) {
    if(s.count(c[i])) s[c[i]]++;
    else s[c[i]]=1;
  }
  //最初のk個の種類数=s.size()をctの初期値にする。
  ll ans = s.size(), ct = s.size();
  
    //cout<<ct<<endl;
  for(int i=k; i<n; i++) {
    s[c[i-k]]--;    
    if(s[c[i-k]] == 0) ct--;  
      //cout<<c[i-k]<<":"<<s[c[i-k]]<<":"<<ct<<endl;
    if(s.count(c[i])) {
      s[c[i]]++;
      if(s[c[i]] == 1) ct++;
    }    
    else {
      s[c[i]]=1;
      ct++;
    }
    ans = max(ans,ct);
  }  
  cout<<ans<<endl;
}