#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  
  long long sum = 0;
  
  vector<int> vec(n);
  
  for (int i = 0; i < n; i++) {
    cin >> vec.at(i);
    sum += vec.at(i);
  }
  sort(vec.begin(), vec.end());
  
  cout << vec.at(0) <<" "<< vec.at(n-1) <<" "<< sum << endl;
}
