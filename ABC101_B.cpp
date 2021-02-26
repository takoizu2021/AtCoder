#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  string s = to_string(n);
  //sum
  int sum = 0;
  rep(i,s.size()) {
    sum += s[i] - '0';
  }
  
  //Š„‚èØ‚ê‚é‚©
  if(n % sum == 0) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}