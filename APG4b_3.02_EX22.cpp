#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //数学関数
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<pair<int, int> > p(n);
  rep(i,n) cin>>p[i].second>>p[i].first;
  
  sort(p.begin(), p.end());
  
  //cout<<p[0].second<<" "<<p[0].first<<endl;　テスト出力
  rep(i,n) cout<<p[i].second<<" "<<p[i].first<<endl;
}