#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S, D;
  cin >> N >> S >> D;
  //cout << N << S << D << endl;
  
  vector<int> X(N);
  vector<int> Y(N);
  
  int count = 0;
  
  for (int i = 0; i < N; i++) {    
    cin >> X.at(i) >> Y.at(i); 
    
    if ( X.at(i) < S && Y.at(i) > D ) {
      count++;
    }
  }
  
  if ( count == 0 ) {
    cout << "No" << endl;
  }
  else {
    cout << "Yes" << endl;
  }

}
