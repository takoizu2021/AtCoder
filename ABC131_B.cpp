#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;

int main() {
  int n,l;
  cin>>n>>l;
  
  int ans = 101+(200-1);
  int all = 0;
  for(int i=1;i<=n;++i) {
    all += l+(i-1);
    if(abs(ans) >= abs(l+(i-1))) {
      ans = l+(i-1);
    }
  }
  cout<<all-ans<<endl;
}