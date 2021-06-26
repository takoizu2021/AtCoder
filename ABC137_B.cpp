#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int k,x;
  cin>>k>>x;
  
  for(int i=x-(k-1); i<=x+(k-1); i++) {
    cout<<i;
    if(i == x+(k-1)) cout<<endl;
    else cout<<" ";
  }
}