#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000;
using ll = long long;

int main() {
  string n;
  cin>>n;
  
  sort(n.begin(), n.end());
  
  long long ans=0;
  int k=n.size();
  
  for(int i=1; i<(1<<k)-1; ++i) {
    bitset<9> s(i);
    string a="", b="";
    for(int j=0; j<k; ++j) {
      if(s.test(j)) a+=n[j];
      else          b+=n[j];
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    ll an=stol(a), bn=stol(b);
    //cout<<i<<" "<<a<<" "<<b<<endl;
    ans = max(ans, an*bn);
  }
  
  cout<<ans<<endl;
}