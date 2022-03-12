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

vector<int> marge(vector<int> a) {
	//3.�v�f���� 1 �ȉ��̏ꍇ�͉����s��Ȃ��B
	if(a.size()<=1) return a;

	//�z������E�ɕ������ă\�[�g���s���B X=?2N?? �Ƃ����B
	int n = a.size();
	int x = n/2;
	
	vector<int> l,r;
	//1.A[0],A[1],...,A[X?1] �����̏��ɔz�� L �Ɋi�[����B
	rep(i,x) l.push_back(a[i]);
	//2.A[X],A[X+2],...,A[N?1] �����̏��ɔz�� R �Ɋi�[����B
	rep2(i,x,n) r.push_back(a[i]);

	//3.L,R ���ċA�I�Ƀ\�[�g����B
	l = marge(l);
	r = marge(r);

	//4.R ���t���ɕ��ёւ��A L �̍Ō���Ɍ�������B
	rep(i,r.size()) l.push_back(r[r.size()-1-i]);

	//5.��z�� B ��p�ӂ��A L ����ɂȂ�܂ňȉ����J��Ԃ��s���B 
	vector<int> b;
	while(!l.empty()) {
		//5-1.L �̐擪�̗v�f�� efirst? �A�����̗v�f�� elast? �����B
		//5-2.efirst? <= elast? �Ȃ�� efirst? �̒l�� B �̖����ɒǉ����A
		//    efirst? ���폜����B
		if(l.front() <= l.back()) {
			b.push_back(l.front());
			l.erase(l.begin());
		}
		//5-3.efirst > elast? �Ȃ�� elast? �̒l�� B �̖����ɒǉ����A
		//    elast? ���폜����B
		else {
			b.push_back(l.back());
			l.pop_back();
		}
	}
	//6.�z�� B �̒l���o�͂���B
	return b;
}

int main() {
    int n;
    cin>>n;
	vector<int> a(n);
    rep(i,n) cin>>a[i];

	a = marge(a);

	pri(n,a);

	return 0;
}