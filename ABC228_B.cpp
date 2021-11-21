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
  int n,x;
  cin>>n>>x;
  vector<int> a(n+1);
  rep2(i,1,n+1) cin>>a[i];
  vector<bool> chk(n+1,false);
  chk[x]=true;
  
  int i=x;
  while(chk[a[i]] == false) {    
    chk[a[i]] = true;    
    i=a[i];
  }
  int ans=0;
  rep2(i,1,n+1) if(chk[i]) ++ans;
  //rep2(i,1,n+1) cout<<chk[i];
  
  cout<<ans<<endl;
}