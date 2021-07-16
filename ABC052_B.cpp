#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  string s;
  cin>>n>>s;
  
  int x=0, ans=0;
  rep(i,n) {
    if(s[i] == 'I') x++;
    else if(s[i] == 'D') x--;
    ans = max(ans,x);
  }
  cout<<ans<<endl;
}