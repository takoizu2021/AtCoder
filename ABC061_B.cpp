#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,m;
  cin>>n>>m;
  
  map<int,int> r;
  int a;
  rep(i,m*2) {
    cin>>a;
    if(r.count(a)) r[a]++;
    else r[a] = 1;
  }
  
  for(int i=1; i<=n; i++) cout<<r[i]<<endl;
}