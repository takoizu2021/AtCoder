#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  cin >> n;
  int card[4][13];
  
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 13; j++) {
      card[i][j] = 0;      
    }
  }
  
  char a;
  int b;
  
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    if(a == 'S') {
      card[0][b - 1] = 1;
    }
    else if(a == 'H') {
      card[1][b - 1] = 1;
    }
    else if(a == 'C') {
      card[2][b - 1] = 1;
    }
    else if(a == 'D') {
      card[3][b - 1] = 1;
    }    
  }
  
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 13; j++) {
      if(card[i][j] != 1) {
        if(i == 0) {
          cout << 'S' << " " << j + 1 << endl;        
        }
        else if (i == 1) {
          cout << 'H' << " " << j + 1 << endl;
        }
        else if (i == 2) {
          cout << 'C' << " " << j + 1 << endl;
        }
        else if (i == 3) {
          cout << 'D' << " " << j + 1 << endl;
        }        
      }      
    }
  } 
  
}
