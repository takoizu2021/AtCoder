#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;  
  
  vector<int> abc(n);
  
  for (int i = 0; i < n; i++ ) {
    cin >> abc.at(i);
  }
  
  int count = 0;
  
  bool finished = true;
  
  while(finished) {  
    for (int i = 0; i < n; i++ ) {
      
      if(abc.at(i) % 2 > 0) {
        finished = false;
        break;
      }      
      abc.at(i) /= 2;
    }

    if(!finished) {
      break;
    }
    
    count++;
  }
  
  cout << count << endl;
  
}
