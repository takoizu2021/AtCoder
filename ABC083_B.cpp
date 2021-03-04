#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n,a,b;
  cin >>n>>a>>b;
  
  int sum = 0;
  string str = "";
  int ans = 0;
  for(int i = 1;i <= n; i++) {
    str = to_string(i);  //intŒ^‚ğstringŒ^‚É•ÏŠ·‚·‚é
    rep(j,str.size()) {
      sum += str[j] - '0';
    }
    if(sum >= a && sum <= b) {
      ans += i;
    }
    sum = 0;
  }
  cout << ans << endl;  
}