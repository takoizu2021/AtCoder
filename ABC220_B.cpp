#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000;
using ll = long long;

int f(string s,int k) { //k(2<=k<=10)進法表記のsを、10進法表記で表す関数
  int ans=0;
  for(char x:s) {
    ans *= k;
    ans += x-'0';
  }
  return ans;  
}

int main() {
  int k;
  string a,b;
  cin>>k>>a>>b;
  ll A = f(a,k);
  ll B = f(b,k);

  cout<< A*B <<endl;
}