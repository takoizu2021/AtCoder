#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  string x;
  cin>>x;
  
  string ans="NO";
  
  while(x != "") {
    if(x[0] == 'c') {
      if(x[1] == 'h') x.erase(0,2);
      else break;
    }
    else if(x[0] == 'o') x.erase(0,1);
    else if(x[0] == 'k') x.erase(0,1);
    else if(x[0] == 'u') x.erase(0,1);
    else break;    
  }
  if(x == "") ans="YES";
  
  cout<<ans<<endl;  
}