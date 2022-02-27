#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;
//Å‘åŒö–ñ” gcd(A,B)



int main() {
  int q;
  cin>>q;
  multiset<ll> s;
  /*
  int x = 10;
  s.insert(x);
  s.insert(x+1);
  s.insert(x*2);
  auto itr = s.end();
  cout<<*itr<<endl;
  */
  rep(i,q) {
    int val;
    cin>>val;
    
    if(val==1) {
      ll x;
      cin>>x;
      s.insert(x);
    }
    
    if(val==2) {
      ll x,k;
      cin>>x>>k;
      auto itr = s.upper_bound(x);
      //—v‘f‚ª‹ó‚Ìˆ—
      if(s.empty()) {
        cout<<-1<<endl;
        continue;
      }
      
      while(itr!=s.begin()&&k) {
        itr--;
        k--;
      }
      if(k>0) cout<<-1<<endl;      
      else cout<<*itr<<endl;
      
    }
    
    if(val==3) {
      ll x,k;
      cin>>x>>k;
      auto itr = s.lower_bound(x);
      //—v‘f‚ª‹ó‚Ìˆ—
      if(s.empty()) {
        cout<<-1<<endl;
        continue;
      }
      
      auto chk = s.end();
      chk--;
      int temp = k-1;
      while(itr!=chk&&temp) {
        itr++;
        temp--;
      }
      if(temp>0) cout<<-1<<endl;
      else cout<<*itr<<endl;
    }
  }
  //*/
}