#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string rgb="aaa";
  char c;

  rep(i,3) {
    cin>>c;
    rgb[i]=c;
  }
  long long num = stol(rgb);        //stringŒ^‚ðllŒ^‚É•ÏŠ·‚·‚é
  if(num%4==0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}