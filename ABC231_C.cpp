#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;
int main() {
  int n,q;
  cin>>n>>q;
  vector<int> a(n);
  rep(i,n) cin>>a[i];
  sort(a.begin(), a.end());
  
  rep(i,q) {
    int x;
    cin>>x;
    int l=0, r=n, mid=((r-l)/2)+l;
    while(l!=r) {
      mid = ((r-l)/2)+l;
      if(x<=a[mid]) {
        r = mid;
      }
      else {
        l = mid+1;
      }
      //cout<<"l"<<l<<"|"<<"r"<<r<<endl;
    }
    int ans = n-l;
    cout<<ans<<endl;
  }  
}