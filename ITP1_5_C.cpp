#include <bits/stdc++.h>
using namespace std;

int main() {
    
  while (true) {
    int h = 0, w = 0;
    cin >> h >> w;
    if (h == 0 && w == 0) {
      break;
    }
  
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
        
        if(i == 0 || i % 2 == 0) {
          if(j == 0 || j % 2 == 0) {
            cout << "#";
          }
          else {
            cout << ".";
          }
        }
        else{
          if(j == 0 || j % 2 == 0) {
            cout << ".";
          }
          else {
            cout << "#";
          }
        }
        if(j == w - 1) {
          cout << endl;
        }        
      }
      if(i == h - 1) {
        cout << endl;
      }
    }
  }
  
}
