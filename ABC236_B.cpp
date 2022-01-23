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
  int n;
  cin>>n;
  vector<int> a(n+1);
  vector<bool> ans(n+1,true);
  rep2(i,1,4*n) {
    int x;
    cin>>x;
    a[x]++;
    if(a[x] == 4) ans[x] = false;
  }
  rep2(i,1,n+1) if(ans[i]) cout<<i<<endl;
}