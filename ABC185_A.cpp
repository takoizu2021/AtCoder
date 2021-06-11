#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  
  int ans = min(min(min(a,b),c),d);
  cout<<ans<<endl;
}  