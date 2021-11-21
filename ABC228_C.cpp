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
  int n,k;
  cin>>n>>k;
  vector<int> p(n);
  
  rep(i,n) rep(j,3) {
    int a;
    cin>>a;
    p[i] += a;
  }
  
  vector<int> s = p;
  sort(s.rbegin(),s.rend());
  
  int b = s[k-1];
  rep(i,n) {
    if(p[i] + 300 >= b) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  
}