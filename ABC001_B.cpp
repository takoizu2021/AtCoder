#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int m;
  cin>>m;
  
  int vv=0;
  if(m<100) vv=0;
  else if(100<=m&&m<=5000) vv=m*10 / 1000;
  else if(6000<=m&&m<=30000) vv=m/1000 + 50;
  else if(35000<=m&&m<=70000) vv=(m/1000 - 30) / 5 + 80;
  else if(70000<m) vv=89;
  
  if(vv<10) cout<<0;
  cout<<vv<<endl;
}