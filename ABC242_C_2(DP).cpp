#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
const int mod=998244353;
using ll = long long;
//Å‘åŒö–ñ” gcd(A,B)

int main() {
  int n;
  cin>>n;
  
  vector<vector<int>> dp(n,vector<int> (10,0));  
  for(int i=1; i<=9; ++i) dp[0][i]=1;
  
  for(int i=0; i<n-1; ++i) {
    for(int j=1; j<=9; ++j) {
      
      dp[i+1][j]   = (dp[i+1][j]+dp[i][j])%mod;
      
      if(j==1) dp[i+1][j+1] = (dp[i+1][j+1]+dp[i][j])%mod;
      else if(j==9) dp[i+1][j-1] = (dp[i+1][j-1]+dp[i][j])%mod;
      
      else {
        dp[i+1][j+1] = (dp[i+1][j+1]+dp[i][j])%mod;
        dp[i+1][j-1] = (dp[i+1][j-1]+dp[i][j])%mod;
      }
    }
  }
  
  ll ans = 0;
  for(int i=1; i<=9; ++i) {
    ans = (ans+dp[n-1][i])%mod;
  }
  
  cout<<ans<<endl;
}