#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int n,k;
  cin >> n >> k;  
  vector<int> vec(n + 1);
  
  //in
  int di;
  rep(i,k) {
    cin >> di;
    rep(i,di) {
      int ai;
      cin >> ai;
      vec[ai]++;
    }
  }
  
  //count
  int count = 0;
  rep2(i,1,n + 1) {
    if(vec[i] == 0) {
      count++;
    }
  }
  
  cout << count << endl;
}