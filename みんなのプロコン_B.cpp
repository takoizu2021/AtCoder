#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b;
  vector<int> ct(5);
  
  rep(i,3) {
    cin>>a>>b;
    ct[a]++;
    ct[b]++;
  }
  string ans = "YES";
  rep(i,5) if(ct[i] >= 3) ans = "NO";
  cout<<ans<<endl;
}