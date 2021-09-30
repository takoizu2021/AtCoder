#include <bits/stdc++.h>
#include <regex> // ���K�\������舵�����߂̃��C�u����
using namespace std;
const int inf = 1000000;

int main() {
	long long a,b;
	cin>>a>>b;

    // ��b�܂ł̍��������ӂ邢���Ƃ����߂��
    // �����ł͑傫�߂ɃT�C�Y1100000�܂Ŋm�ۂ��Ă���
	vector<bool> isprime (1100000,true);

    // a�ȏ�b�ȉ��̐���v���f�����ǂ���
    // ���̓�����isprime[b-a]�Ɋi�[�����
    vector<bool> isprime2 (b-a+1,true);
  	cout<<"isprime2-size:"<<b-a+1<<endl;

    // �ӂ邢
    for(long long p=2; p*p<=b; ++p) {
        // ���łɍ������ł�����̂̓X�L�b�v
        if(!isprime[p]) continue;

        // p�ȊO��p�̔{������f�����x���𔍒D
       	cout<<"p�ȊO��p�̔{������f�����x���𔍒D"<<endl;
        for(long long q=p*2; q*q<=b; q+=p) {
            isprime[q] = false;
          	cout<<"q:"<<q<<" ";
        }
		cout<<endl;
      
        // start:a�ȏ�̍ŏ���p�̔{��
       	cout<<"start:a�ȏ�̍ŏ���p�̔{��"<<endl;
        long long start = (a+p-1)/p*p;
      		cout<<"start = (a+p-1)/p*p:"<<(a+p-1)/p*p<<endl;
        if(start==p) start=p*2;
          	cout<<"start:"<<start<<endl;;

        // a�ȏ�b�ȉ��̐����̂����Ap�̔{�����ӂ邤
       	cout<<"a�ȏ�b�ȉ��̐����̂����Ap�̔{�����ӂ邤"<<endl;
      	cout<<"p:"<<p<<endl;
        for(long long q=start; q<=b; q+=p) {
          	cout<<"q-a:"<<q-a<<" ";
            isprime2[q-a] = false;
        }
      	cout<<endl;
    }

    // ����
    long long res=0;
    for(long long q=a; q<=b; ++q) {
        if(isprime2[q-a]) ++res;
    }
    
    cout<<res<<endl;
	return 0;
}