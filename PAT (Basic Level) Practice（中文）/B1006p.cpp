/*
20190430
������Ī�������С���⣬�ƺ���ֵһ�ᣬ�����һ�string����⻹����� 
*/
#include <iostream>
#include <string>
using namespace std;

void rep(int n, int m){
	char s;
	int i;
	if(m==3) s='B';
	else s='S';
	for(i=0;i<n;i++){
		cout << s;
	}
}

int main(){
	string str;
	int n,num,i;
	cin >> str;
	n = str.length();
	//�����λ 
	for(i=n;i>1;i--){
		num=str[n-i]-'0';
		rep(num,i);
	}
	//�����λ
	int ge=str[n-1]-'0';
	for(i=1;i<=ge;i++){
	 	cout << i; 
	 }
} 
