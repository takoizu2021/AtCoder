#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int l,h,n;
  cin>>l>>h>>n;
  
  //vector<int> a(n);
  int chk,ans;
  rep(i,n) {
    cin>>chk;
    if(chk < l) ans=l-chk;
    else if(l<=chk&&chk<=h) ans=0;
    else if(h<chk) ans=-1;
    cout<<ans<<endl;
  }
}