#include <iostream>
#include <vector>
using namespace std;

// 1 �ȏ� N �ȉ��̐������f�����ǂ�����Ԃ�
vector<bool> Eratosthenes(int N) {
    // �e�[�u��
    vector<bool> isprime(N+1, true);

    // 0, 1 �͗\�߂ӂ邢���Ƃ��Ă���
    isprime[0] = isprime[1] = false;

    // �ӂ邢
    for (int p = 2; p <= N; ++p) {
        // ���łɍ������ł�����̂̓X�L�b�v����
        if (!isprime[p]) continue;

        // p �ȊO�� p �̔{������f�����x���𔍒D
        for (int q = p * 2; q <= N; q += p) {
            isprime[q] = false;
        }
    }

    // 1 �ȏ� N �ȉ��̐������f�����ǂ���
    return isprime;
}

int main() {
    // ����
    int N;
    cin >> N;

    // �G���g�X�e�l�X���
    vector<bool> isprime = Eratosthenes(N);

    // ����
    int res = 0;
    for (int i = 2; i <= N - i; ++i) {
        if (isprime[i] && isprime[N-i]) {
            ++res;
            cout<<i<<endl;
        }
    }
    cout << res << endl;
}