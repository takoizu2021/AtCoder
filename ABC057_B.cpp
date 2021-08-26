#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n,m;
  cin>>n>>m;
  
  vector<pair<int,int>> h(n);
  rep(i,n) cin>>h[i].first>>h[i].second;
  
  vector<pair<int,int>> p(m);
  rep(i,m) cin>>p[i].first>>p[i].second;
  
  int ans=51, kyori_hp=0, kyori_min=0;

  rep(i,n) {
    kyori_min=abs(h[i].first-p[0].first) + abs(h[i].second-p[0].second);
    ans=1;
    rep2(j,1,m) {
      kyori_hp = abs(h[i].first-p[j].first) + abs(h[i].second-p[j].second);
      //cout<<kyori_hp<<endl;
      if(kyori_min > kyori_hp) {
        ans=j+1;
        kyori_min=kyori_hp;
      }
    }
    cout<<ans<<endl;
  }
}