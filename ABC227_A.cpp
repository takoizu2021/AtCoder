#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;

int main() {
  int n,k,a;
  cin>>n>>k>>a;
  
  --a;
  rep(i,k) {    
    ++a;
    if(a>n) a=1;
  }
  cout<<a<<endl;
}