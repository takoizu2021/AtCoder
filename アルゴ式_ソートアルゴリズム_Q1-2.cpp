#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

//3.A �̊e�v�f���󔒋�؂�ŏo�͂���B
void pri(int n, vector<int> a) {
	rep(i,n) {
		cout<<a[i];
		if(i!=n-1) cout<<" ";
		else cout<<endl;
	}
	return;
}

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	rep(i,n) cin>>a[i];

	int mn,it;

	rep(i,n-1) {
	  mn=inf;
	  it=n;
	  //1.A[k],A[k+1],?,A[N?1] �̂����l���ł��������v�f�� 1 ��I������B
	  // �������A�Y������v�f����������ꍇ�͂��̂����ł��O�ɂ���v�f��I������B
	  rep2(j,i,n) {
	    if(mn>a[j]) {
	      mn=a[j];
		  it=j;
	    }
	  }
	  //2.A[k] �ƑI�񂾗v�f����������B
	  swap(a[i],a[it]);
	  
	  //3.A �̊e�v�f���󔒋�؂�ŏo�͂���B
	  pri(n,a);
	  //cout<<"mn"<<":"<<mn<<":"<<"it"<<it<<endl;
	}

	return 0;
}