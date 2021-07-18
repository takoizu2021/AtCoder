#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int w,h,n;
  cin>>w>>h>>n;
  
  w++; h++; 
  
  vector<char> wa(w,'#');
  vector<char> ha(h,'#');
  
  int x,y,a;
  rep(i,n) {
    cin>>x>>y>>a;
    if      (a == 1) {
      rep2(j,1,x+1) wa[j] = '.';
    }
    else if (a == 2) {
      rep2(j,x+1,w)wa[j] = '.';
    }
    else if (a == 3) {
      rep2(j,1,y+1) ha[j] = '.';      
    }
    else if (a == 4) {
      rep2(j,y+1,h) ha[j] = '.';
    }
  }
  
  int ctx=0,cty=0;
  rep2(i,1,w) if(wa[i]=='#') ctx++;
  rep2(i,1,h) if(ha[i]=='#') cty++;
  
  //cout<<ctx<<":"<<cty<<endl;
  
  int ans=ctx*cty;
  cout<<ans<<endl;
}