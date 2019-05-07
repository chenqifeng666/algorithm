/*
20190507
两个思路，一个是string读入，一个是int读入
比较简单 
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
	string N;
	int v[10]={0};//分10组存储 
	int i,temp;
	cin >> N;
	int len=N.length();
	for(i=0;i<len;i++){
		temp=N[i]-'0';
		v[temp]++;
	}
	int num;
	for(i=0;i<10;i++){
		if(v[i]) cout << i << ":" << v[i] << "\n";
	}
	return 0;
} 
