#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int h,w;
  cin>>h>>w;
  
  vector<char> yoko(w+2);
  vector<vector<char> > s(h+2,yoko);  
  rep2(i,1,h+1) { 
    rep2(j,1,w+1) {
      cin>>s[i][j];
    }
  }
  
  string ans = "Yes";
  rep2(i,1,h+1) { 
    rep2(j,1,w+1) {
      if(s[i][j] == '#') {
        if(s[i-1][j]=='.'&&s[i+1][j]=='.'&&s[i][j-1]=='.'&&s[i][j+1]=='.') {
        ans = "No";
        //cout<<i<<j<<endl;
        //cout<<s[i-1][j]<<s[i+1][j]<<s[i][j-1]<<s[i][j+1]<<endl;
        break;
        }
      }
    }
  }
  cout<<ans<<endl;
}