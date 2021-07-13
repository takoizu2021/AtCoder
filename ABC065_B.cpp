#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<int> a(n+1);
  rep2(i,1,n+1) cin>>a[i];
  
  set<int> s;
  int ans = -1, ct=0;
  for(int i=1;i!=2;) {
    ct++;
    if(s.count(a[i])) break;    
    else {
      if(a[i] == 2) {
        ans = ct;
        break;
      }
      else {
        s.insert(i);
        i = a[i];
      }
    }
  }
  cout<<ans<<endl; 
}