#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;

int main() {
  string n;
  cin>>n;
  
  int sum;
  rep(i,n.size()) {
    int an = n[i] - '0';//charŒ^‚Ì”’l‚ğint‚É’u‚«Š·‚¦‚é
    sum += an;
  }
  if(sum % 9 == 0) {
    cout<<"Yes"<<endl;
  }
  else {
    cout<<"No"<<endl;
  }
}