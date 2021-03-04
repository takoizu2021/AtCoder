#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin >> n;
  
  vector<double> g(n);
  string str;
  
  rep(i,n) {
    cin >> g[i];
    cin >> str;
    if(str == "BTC") {
      g[i] *= 380000;
    }
  }
  
  double sum = 0;
  rep(i,n) {
    sum += g[i];
  }
  
  cout << sum << endl;
}