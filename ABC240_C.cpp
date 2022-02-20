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
  int n,x;
  cin>>n>>x;
  vector<int> a(n),b(n);
  rep(i,n) {
    cin>>a[i]>>b[i];
  }
  
  vector<vector<bool>> dp(n+1,vector<bool>(10000+1,false));
  
  dp[0][0]=true;
  
  rep(i,n)rep(j,10001) {
    if(!dp[i][j]) continue;
    
    dp[i+1][j+a[i]]=true;
    dp[i+1][j+b[i]]=true;
  }
  /*
  rep(i,n+1) rep(j,sum+1) {
    cout<<dp[i][j]<<" ";
    if(j==sum) cout<<endl;
  }
  */
  if(dp[n][x]) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  
}