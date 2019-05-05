/*
20190430
遇到了莫名其妙的小问题，似乎不值一提，可能我会string的理解还不深吧 
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
	//输出高位 
	for(i=n;i>1;i--){
		num=str[n-i]-'0';
		rep(num,i);
	}
	//输出个位
	int ge=str[n-1]-'0';
	for(i=1;i<=ge;i++){
	 	cout << i; 
	 }
} 
