#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int k,s;
  cin>>k>>s;
  
  int ans=0;
  for(int x=0; x<=k; x++) {
    for(int y=0; y<=k; y++) {
      int z=s-(x+y);      
      if(0<=z && z<= k) ans++;
        //cout<<x<<":"<<y<<":"<<z<<"---"<<ans<<endl;
    }
  }
  
  cout<<ans<<endl;
}