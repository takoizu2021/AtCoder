#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  int x;
  bool ans = false;
  for(int i=1;i<=n;i++) {
    x = i * 1.08;
    if(x == n) {
      cout<<i<<endl;
      ans = true;
      break;
    }
  }
  if(ans == false) cout<<":("<<endl;
}