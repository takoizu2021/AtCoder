#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<int> syu(n+1);
  vector<vector<int> > ryo(3,syu);
  
  rep(i,3) {
    rep2(j,1,n+1) {
      cin>>ryo[i][j];
    }
  }
  
  int tot=0;
  rep(i,n+1) {
    tot += ryo[1][ryo[0][i]];
    if( ryo[0][i]+1 == ryo[0][i+1] ) {
      tot += ryo[2][ryo[0][i]];
        //cout<<ryo[2][ryo[0][i]]<<endl;
    }
  }
  cout<<tot<<endl;
}