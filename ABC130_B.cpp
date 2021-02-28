#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int n,x;
  cin >> n >> x;
  vector<int> vec(n + 1);
  vec[0] = 0;
  
  //in
  int d;
  for(int i = 0; i < n + 1; i++) {    
    cin >> d;
    vec[i + 1] = d + vec[i];
  }
  //
  int ct = 0;
  rep(i,n + 1) {
    if(vec[i] <= x) {
      ct++;
    }
  }
  cout << ct << endl;
}