/*
20190507
����˼·��һ����string���룬һ����int����
�Ƚϼ� 
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
	string N;
	int v[10]={0};//��10��洢 
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
