#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  vector<int> vec(3);
  cin >> vec[0] >> vec[1] >> vec[2];
  
  sort(vec.begin(), vec.end());
  
  cout << (vec[2] - vec[1]) + (vec[1] - vec[0]) <<endl;  
}