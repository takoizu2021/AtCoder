#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  
  int sum = 0;
  while(1) {
    cin>>a;
    if(a[0] == '0') {
      break;
    }
    for(int i=0;i<a.size();++i) {
      sum += a[i] - '0';
    }
    cout<<sum<<endl;
    sum = 0;
  }
}