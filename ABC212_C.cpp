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
  int n,m;
  cin>>n>>m;
  
  vector<int> a(n),b(m);
  for(int i=0; i<n; ++i) cin>>a[i];
  for(int i=0; i<m; ++i) cin>>b[i];
    
  sort(b.begin(),b.end());
  
  int ans=inf;
  for(int i=0; i<n; ++i) {
    //left‚Ía[i]ˆÈã‚ÅÅ¬
    int left=0, right=m-1;
    while(left!=right) {
      int mid=(left+right) / 2;
      if(b[mid] >= a[i]) right = mid;
      else               left  = mid+1;
    }
    int up=abs(a[i]-b[left]), dw=inf;
    //‚à‚µleft‚ª1ˆÈã‚È‚ça[i]–¢–ž‚ÅÅ‘å‚Ìb[left-1]‚Æ‚Ì·•ª‚ðo‚·
    if(left>0) dw = abs(a[i]-b[left-1]);
    //cout<<up<<":"<<dw;    
    ans = min({ans,dw,up});
  }
  
  cout<<ans<<endl;
}