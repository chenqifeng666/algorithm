#include <iostream>
using namespace std;

int main(){
	int N,M,i;
	int a[110]={0};
	cin >> N >> M;
	M=M%N; //���ƶ�λ��С����λ�� 
	for(i=0;i<N;i++) cin >> a[i];
	for(i=N-M;i<N;i++){
		cout << a[i] << " ";
	}
	for(i=0;i<N-M-1;i++){
		cout << a[i] << " ";
	}
	cout << a[N-M-1];//������һ�������ո� 
}
