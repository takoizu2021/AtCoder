#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  string a;
  cin>>a;
  
  int n=a.size();
  if(a=="a") cout<<-1<<endl;
  else if(n==1) {
    a[0]--;
    cout<<a<<endl;
  }
  else {
    rep(i,n-1) cout<<a[i];
    cout<<endl;
  }  
}