/*
20190505
����������Ŀ�޶���N�Ĵ�С������ֱ�Ӷ���struct����Ҳ�ǿ��еģ����ҿ��Ը��ӷ����ʹ��sort
*/
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct mooncake{
	int amout;
	int sale;
	double price;
}m[1001];

bool cmp(struct mooncake a, struct mooncake b){return a.price>b.price;} 
int main(){
	int N,sum,i;
	cin >> N >> sum;
	for(i=0;i<N;i++) cin >> m[i].amout;
	for(i=0;i<N;i++) cin >> m[i].sale;
	for(i=0;i<N;i++) m[i].price=m[i].sale/(double)m[i].amout;//���㵥�� 
	
	sort(m,m+N,cmp);//���ݵ��۴Ӵ�С����
	
	//̰��˼ά
	int remain=sum,temp;
	double profit=0;
	for(i=0;remain>0;i++){
		temp=remain-m[i].amout;
		if(temp>0){
			profit+=m[i].sale;
			remain=temp;
		}else{
			profit+=m[i].price*remain;
			remain=0;
		}
	}
	printf("%.2f",profit);
	return 0;
} 
