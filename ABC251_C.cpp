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
  
  set<string> score;
  int ans = 0;
  int tempt = -1;
  
  rep(i,n) {
    string s;
    int t;
    cin>>s>>t;
    
    if(!(score.count(s))) {
      score.insert(s);
      if(tempt < t) {
        tempt = t;
        ans = i+1;
      }
    }
    //cout<<ans<<endl;
  }
  
  cout<<ans<<endl;
}