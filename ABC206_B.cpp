#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  ll n;
  cin>>n;
  
  ll tot = 0; ll i = 1;
  while(tot < n) {
    tot += i;
    if(tot >= n) break;
    i++;
    //cout<<tot<<endl;
  }
  cout<<i<<endl;
}