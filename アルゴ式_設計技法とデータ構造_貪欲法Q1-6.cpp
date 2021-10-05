#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> x(n), y(n);
	for(int i=0; i<n; ++i) cin>>x[i]>>y[i];

	//�񒸓_�Ԃ̋��������߂�֐�
	auto calc = [&](int i, int j) -> double {
		return sqrt( (x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i]) );
	};

	//����
	double res = 0.0;

	// ���_[v] <- ���_v�����ɖK�ꂽ��
	vector<bool> used (n,false);
	used[0]=true;

	//�O��̒��_
	int prev = 0;

	//�����×~�ɒ��_�����߂Ă䂭
	for(int i=0; i<n-1; ++i) {
		//�c���Ă��钸�_�ŋ߂��Ƃ����T��
		int nex = -1;
		double min_dis = 1000000;
		for(int j=1; j<n; ++j) {
			//���ɖK�ꂽ���_�̓X�L�b�v
			if(used[j]) continue;
			double dis = calc(prev, j);
			if(min_dis > dis) {
				min_dis = dis;
				nex = j;
			}
		}

		//�V���ɒ��_ nex ��K���
		used[nex] = true;
		res += min_dis;

		//�O�񒸓_���X�V
		prev = nex;
	}

	//�Ō�ɒ��_ 0 �ɖ߂�
	res += calc(prev, 0);

	cout << fixed << setprecision(10) << res << endl;
	return 0;
}