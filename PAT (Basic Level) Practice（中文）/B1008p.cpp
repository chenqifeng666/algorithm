/*
20190430
问题：本来采用的是先输出a[0]，再输出" "+a[i]，部分正确，后来采用先输出a[i]+" ",再输出a[末尾]，完全正确 
两者理论上不应该有区别啊？不知道为什么？ 
*/
#include <iostream>
using namespace std;

int main(){
	int N,M,i;
	int a[110]={0};
	cin >> N >> M;
	M=M%N; //令移动位数小于总位数 
	for(i=0;i<N;i++) cin >> a[i];
	for(i=N-M;i<N;i++){
		cout << a[i] << " ";
	}
	for(i=0;i<N-M-1;i++){
		cout << a[i] << " ";
	}
	cout << a[N-M-1];//输出最后一个不带空格 
}
