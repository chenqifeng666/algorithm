/*
20190503
ÌâÄ¿¼òµ¥ 
*/
#include <iostream>
using namespace std;

int main(){
	int T,i;
	long long a,b,c,ab;
	bool flag[10]={false}; 
	cin >> T;
	for(i=0;i<T;i++){
		cin >> a >> b >> c;
		ab=a+b;
		if(ab>c){
			flag[i]=true;
		}
	}
	for(i=0;i<T;i++){
		if(flag[i]){
			cout << "Case #" << i+1 << ": true";
		}else{
			cout << "Case #" << i+1 << ": false";
		}
		if(i<T-1) cout << "\n";
	}
} 
