#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

vector<vector<int> > memo;

vector<int> a;

// �ċA�֐� (A �̑O���� i �̒����炢�����I��� j �����邩)
int func (int i, int j) {
    // �ߋ��Ɍv�Z�ς݂̏ꍇ�����ɋL�^���ꂽ�l��Ԃ�
    if(memo[i][j] != -1) return memo[i][j];
    // i = 0 �̂Ƃ��A j = 0 �Ȃ� true
    if(i==0) return memo[i][j] = j==0;

    // ����ȊO�̂Ƃ��A��蕶�̒ʂ�ɔ��肷��
    int flg = 0;
    memo[i][j]=0;
	if(j>=a[i-1] && func(i-1,j-a[i-1])==1) return flg=1;
	if(func(i-1,j)==1) flg=1;

	return flg;
}

int main() {
	int n,x;
	cin>>n>>x;
	a.resize(n);
	rep(i,n) cin>>a[i];

    memo.resize(n+1,vector<int> (x+1,-1));

    string ans = func(n,x) == 1 ? "Yes":"No";
    cout<<ans<<endl;
	return 0;
}