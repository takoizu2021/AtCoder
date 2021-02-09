#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  cin >> n;
  int day[n - 1];
  
  for (int i = 0; i < n; i++) {
    cin >> day[i];
  }
  for (int j = n - 1; j >= 0; j--) {
    cout << day[j];
    if(j != 0) {
      cout << " ";
    }
    else {
      cout << endl;
    }    
  }
}
