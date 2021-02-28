#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin >> n;
  
  vector<int> vec(n);
  rep(i,n) {
    cin >> vec[i];
  }
  
  int h = vec[0];
  int ct = 0;
  rep(i,n) {
    if(vec[i] >= h) {
      ct++;
    }
    h = max(h,vec[i]);
  }
  
  cout << ct << endl;
}