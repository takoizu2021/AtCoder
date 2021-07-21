#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  string s;
  
  int ans=0;
  rep(i,12) {
    cin>>s;    
    rep(j,s.size() ) {      
      if(s[j] == 'r') {
        ans++;
        break;
      }
    }
  }
  cout<<ans<<endl;
}