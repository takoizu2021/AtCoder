#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  
  string st1,st2;
  int t=0;
  int h=0;
  for(int i=0;i<n;i++) {
    cin>>st1>>st2;
    if     (st1 == st2) {
      t += 1;
      h += 1;
    }
    else if(st1 >= st2) {
      t += 3;
    }
    else if(st1 <= st2) {
      h += 3;
    }
  }
  cout<<t<<" "<<h<<endl;
}