/*
20190507
���ʾ��ǽ�10����ת��Ϊ�������
����ʹ������洢Ȼ���������Ҳ�ǿ��Եģ�������ϣ����һЩ��̫��Ϥ�Ķ���
???????????????????????????
���⣺��֪��Ϊʲô��forѭ�����޷����ѭ����Ī��������������� 
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
