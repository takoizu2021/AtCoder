#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  vector<int> vec(3);
  
  //in
  rep(i,3) {
    cin >> vec[i];
  }
  int k;
  cin >> k;  
  //k‰ñ * 2
  sort(vec.begin(), vec.end());
  rep(i,k) {
    vec[2] *= 2;
  }  
  //sum
  int sum = 0;
  rep(i,3) {
    sum += vec[i];
  }
  
  cout << sum << endl;
  
}