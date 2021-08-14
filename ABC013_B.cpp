#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int a,b;
  cin>>a>>b;
  
  int blue=0,red=0;
  for(int i=a; i!=b; i++) {    
    if(i==10) i=0;
    //cout<<i<<endl;
    if(i==b) break;
    blue++;
  }
  for(int i=a; i!=b; i--) {
    if(i==-1) i=9;
    if(i==b) break;
    red++;
  }
  int ans=min(blue,red);
  cout<<ans<<endl;
}