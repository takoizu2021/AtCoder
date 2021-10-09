#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000;
using ll = long long;

int main() {
  int n,m;
  cin>>n>>m;
  
  vector<string> a(2*n);
  for(int j=0; j<2*n; ++j) cin>>a[j];
  
  //���ʂ��Ǘ�����z��A<0>�����i���قǌ���j<1>2:id�A<2>:����
  vector<tuple<int,int,int> > jun (2*n); 
  //�����ݒ�@<0>����=0�A<1>id = <2>���� = i+1
  for(int i=0; i<2*n; ++i)  get<1>(jun[i]) = get<2>(jun[i]) = i;
  
  //for(int j=1; j<2*n; j+=2)  cout<<j<<":"<<j-1<<endl;
  
  for(int i=0; i<m; ++i) {
    for(int j=1; j<2*n; j+=2) { //��̏��ʂ��珟�s�����Ă���
      if((a[ get<1>(jun[j]) ][i]=='G'&&a[ get<1>(jun[j-1]) ][i]=='C') ||
         (a[ get<1>(jun[j]) ][i]=='C'&&a[ get<1>(jun[j-1]) ][i]=='P') ||
         (a[ get<1>(jun[j]) ][i]=='P'&&a[ get<1>(jun[j-1]) ][i]=='G')   ) 
         get<0>(jun[j])--; //������id�̏������𔽉f
      
      if((a[ get<1>(jun[j-1]) ][i]=='G'&&a[ get<1>(jun[j]) ][i]=='C') ||
         (a[ get<1>(jun[j-1]) ][i]=='C'&&a[ get<1>(jun[j]) ][i]=='P') ||
         (a[ get<1>(jun[j-1]) ][i]=='P'&&a[ get<1>(jun[j]) ][i]=='G')   )
         get<0>(jun[j-1])--; //������id�̏������𔽉f
    }  
    //i���I�����ƂɃ\�[�g����i�������A�����������Ȃ�id���Ⴂ���Ƀ\�[�g�����j  
      sort(jun.begin(), jun.end());
    //���ʂ��X�V
  	for(int i=0; i<2*n; ++i) get<2>(jun[i]) = i;    
  }
  
  for(auto t : jun) {    
    int id   = get<1>(t); //id���擾
    int rank = get<2>(t); //���ʂ��擾
    get<0>(t) = id;  //��������id�ɏ㏑��
    get<1>(t) = rank; //id�����ʂɏ㏑��
  }
  
  //id���Ń\�[�g
  sort(jun.begin(), jun.end());
  
  for(int i=0; i<2*n; ++i) {
    ++get<1>(jun[i]);
    cout<<get<1>(jun[i])<<endl;
  }
}