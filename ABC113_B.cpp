#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  double t,a;
  cin>>n>>t>>a;
  double h,thr = 1000000;
  int ans = 0;
  
  rep(i,n) {
   cin>>h;
   h = t - h*0.006;
     //cout<<max(a,h)-min(a,h)<<endl;
   if(thr > abs(a-h) ) {
     ans = i+1;
     thr = abs(a-h);
   }
  }
  
  cout<<ans<<endl; 
  
}