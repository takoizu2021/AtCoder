#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

void pri(int n, vector<int> a) {
	rep(i,n) {
		cout<<a[i];
		if(i!=n-1) cout<<" ";
		else cout<<endl;
	}
	return;
}

vector<int> quick (vector<int> a) {
	//�x�[�X�P�[�X
	if(a.empty()) return a;
	
	//A[X](X=?2N??) �����Ƃ��ă\�[�g���s���B
    //1.��̔z�� L,R ��p�ӂ��A���̑���� i=0,1,?,N?1 �ɂ��čs���B
	int n = a.size();
	vector<int> l,r;
	int x=n/2;
	rep(i,n) {
		//1-1.i=X �Ȃ�Ή����s��Ȃ��B
		//1-2.i!=X ���� A[i]<A[X] �Ȃ�� A[i] �� L �̖����ɒǉ�����B
		if(i!=x && a[i]<a[x]) l.push_back(a[i]);
		//1-3.i!=X ���� A[i]?A[X] �Ȃ�� A[i] �� R �̖����ɒǉ�����B
		if(i!=x && a[i]>=a[x]) r.push_back(a[i]);
	}
	//2.L,R ���N�C�b�N�\�[�g��p���čċA�I�Ƀ\�[�g����B��z��̏ꍇ�͉����s��Ȃ��B
	l = quick(l);
	r = quick(r);

	//3.L �̗v�f, A[X], R �̗v�f�����̏��ɂȂ��Ăł���z����o�͂���B    
	l.push_back(a[x]);
	l.insert(l.end(), r.begin(), r.end());
    //rep(i,n) cout<<l[i]<<":";
    //cout<<endl;
	return l;
}

int main() {
    int n;
    cin>>n;
	vector<int> a(n);
    rep(i,n) cin>>a[i];

	a = quick(a);
    
	pri(a.size(),a);
	
	return 0;
}