#include <bits/stdc++.h>
using namespace std;
#include <cmath> //���w�֐�

int main() {
  int n;
  cin>>n;
  
  if     (n<=59) cout<<"Bad"<<endl;
  else if(60<=n&&n<=89) cout<<"Good"<<endl;
  else if(90<=n&&n<=99) cout<<"Great"<<endl;
  else cout<<"Perfect"<<endl;
}