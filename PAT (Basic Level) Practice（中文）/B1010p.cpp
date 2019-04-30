/*
20190430
问题：不知道如何确定输入结束了，最后发现也不用确定。。。
有些人用cin&cout来也可以，比如while(cin<< a<<n)也是可以的 
*/
#include <cstdio>
using namespace std;

int main(){
	int a,n,a1,n1,c;
	c=0;//记录输入次数 
	while(scanf("%d%d",&a,&n) !=EOF){
		if(n>0){
			a1=a*n;
			n1=n-1;
			if(c++) printf(" "); //如果不是首系数则输出空格 
			printf("%d %d", a1, n1);
		}else{
			if(c==0) printf("0 0");
			else continue; 
		}
	}
	return 0;
} 
