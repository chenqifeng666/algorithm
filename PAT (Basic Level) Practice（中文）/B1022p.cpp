/*
20190507
本质就是将10进制转化为任意进制
本来使用数组存储然后逆序输出也是可以的，但还是希望用一些不太熟悉的东西
???????????????????????????
问题：不知道为什么用for循环就无法完成循环，莫名其妙就跳出来了 
*/
#include <iostream>
#include <stack>
using namespace std;

int main(){
	int a,b,c,d,i;
	cin >> a >> b >> d;
	c=a+b;
	stack<int> st;
	do{
		st.push(c%d);
		c/=d;
	}while(c);

//	for(i=0;i<st.size();i++){
//		cout << st.top();
//		st.pop();
//	}
	while(st.empty()==false){
		cout <<st.top();
		st.pop();
	}
} 
