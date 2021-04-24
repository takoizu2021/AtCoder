#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  string s;
  int q;
  cin>>n>>s>>q;
  int t,a,b;
  
  char ap,bp;
  bool change = false;
  
  rep(i,q) {
    cin>>t>>a>>b;
    a--;
    b--;
    if(t == 1) {
      if(change == 0) {
        ap = s[a];
        bp = s[b];
        s[a] = bp;
        s[b] = ap;
        //cout<<s<<endl;
      }
      else if(change == 1) {
        if(a < n) {
          ap = s[n+a];
          if(b < n) {
            bp = s[n+b];
            s[n+a] = bp;
            s[n+b] = ap;
          }
          else {
            bp = s[b-n];
            s[n+a] = bp;
            s[b-n] = ap;
          }
        }
        else         {
          ap = s[a-n];
          if(b < n) {
            bp = s[n+b-1];
            s[a-n] = bp;
            s[n+b] = ap;
          }
          else {
            bp = s[b-n];
            s[a-n] = bp;
            s[b-n] = ap;
          }
        }
        //cout<<s<<endl;
      }
    }
    else if(t == 2) {
      if(change == false) change = true;
      else change = false;
    }
  }

  if(change == true) {
    string an = s.substr(0,n);
    string bn = s.substr(n,n);
    s = bn + an;
  }
  cout<<s<<endl;
}