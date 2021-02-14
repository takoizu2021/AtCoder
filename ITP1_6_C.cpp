#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  cin >> n;
  
  int b,f,r,v;
  
  vector<vector<vector<int> > > kanri(4, vector<vector<int> >(3, vector<int>(10, 0)));
  
  for(int i = 0; i < n; i++) {
    int b = 0;
    int f = 0;
    int r = 0;
    int v = 0;
    cin >> b >> f >> r >> v;
    
    kanri.at(b-1).at(f-1).at(r-1) += v;
  }
  
  for(int b = 0; b < 4; b++ ) {
    
    if(b > 0){
      cout << "####################" << endl;
    }
    
    for(int f = 0; f < 3; f++ ) {
      for(int r = 0; r < 10; r++ ) {
          
          cout << " " << kanri.at(b).at(f).at(r);
          
          if (r == 9) {
          cout << endl;
          }
        
      }
    }     
  }

}
