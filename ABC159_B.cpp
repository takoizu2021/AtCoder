#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //数学関数
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  string ans = "No";
  //回分か
  string sr = s;
  reverse(sr.begin(),sr.end());
  if(s == sr) {
    //(N?1)/2 文字目まで(両端含む)からなる文字列は回文
    int n = s.size();
    string sh = s.substr(0,(n-1)/2);
    string shr = sh;
    reverse(shr.begin(),shr.end());
    if(sh == shr) {
      //S の (N+3)/2 文字目から N 文字目まで(両端含む)からなる文字列は回文である。
      string sn = s.substr((n+3)/2-1,n-1);
      string snr = sn;
      reverse(snr.begin(),snr.end());
      if(sn == snr) ans = "Yes";
    }
  }
  cout<<ans<<endl;
}