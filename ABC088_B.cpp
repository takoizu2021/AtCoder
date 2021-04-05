#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  vector<int> ca(n);
  rep(i,n) cin>>ca[i];
  sort(ca.begin(), ca.end());
  reverse(ca.begin(), ca.end());
  
  int a=0; int b=0;
  rep(i,n) {
    if(i == 0 || i % 2 == 0)
      a += ca[i];
    else b += ca[i];
  }
  cout<<a-b<<endl;
}