/*
20190430
���⣺��֪�����ȷ����������ˣ������Ҳ����ȷ��������
��Щ����cin&cout��Ҳ���ԣ�����while(cin<< a<<n)Ҳ�ǿ��Ե� 
*/
#include <cstdio>
using namespace std;

int main(){
	int a,n,a1,n1,c;
	c=0;//��¼������� 
	while(scanf("%d%d",&a,&n) !=EOF){
		if(n>0){
			a1=a*n;
			n1=n-1;
			if(c++) printf(" "); //���������ϵ��������ո� 
			printf("%d %d", a1, n1);
		}else{
			if(c==0) printf("0 0");
			else continue; 
		}
	}
	return 0;
} 
