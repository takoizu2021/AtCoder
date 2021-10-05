#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
const int inf = 1000000;

int main() {
	int n;
	cin>>n;
	vector<int> s(n), t(n);
	for(int i=0; i<n; ++i) cin>>s[i]>>t[i];

    //�I������ t ������������id����ёւ���
	vector<int> ids(n);
	for(int i=0; i<n; ++i) ids[i] = i;
	sort(ids.begin(), ids.end(), [&](int i, int j) {
		return t[i] < t[j];
	});

	//�I���������������Ɍ��Ă���
	int res = 0;
	int last_time = 0; //�O��̗\��̏I������
	for (auto i:ids) {
		//�\�� i �̏I���������A�O��I��������葁���ꍇ�̓X�L�b�v
		if(s[i] < last_time) continue;

		++res;
		last_time = t[i];
	}
	cout << res << endl;
	return 0;
}