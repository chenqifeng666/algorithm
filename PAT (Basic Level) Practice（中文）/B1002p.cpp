#include <cstdio>
using namespace std;

int main(){
	const char *cn[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    char str[100];
    char str_sum[10];
    scanf("%s", str);
    int sum=0, num, m;
    for(int i=0;str[i];i++){
    	num = str[i] - '0';
    	sum += num;
	}
	sprintf(str_sum, "%d", sum);
	for(int j=0;str_sum[j];j++){
		m = str_sum[j]-'0';
		printf("%s", cn[m]);
		if(str_sum[j+1]) printf(" ");
	}
	return 0;
}
