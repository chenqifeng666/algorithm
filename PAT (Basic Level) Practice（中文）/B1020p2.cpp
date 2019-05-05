/*
20190505
发现由于题目限定了N的大小，所以直接定义struct数组也是可行的，而且可以更加方便的使用sort
不知道为什么，答案部分正确23分
*/
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct mooncake{
	int amout;
	int sale;
	double price;
}m[1010];

bool cmp(mooncake a, mooncake b){return a.price>b.price;} 
int main(){
	int N,sum,i;
	cin >> N >> sum;
	for(i=0;i<N;i++) cin >> m[i].amout;
	for(i=0;i<N;i++) cin >> m[i].sale;
	for(i=0;i<N;i++) m[i].price=m[i].sale/(double)m[i].amout;//计算单价 
	
	sort(m,m+N,cmp);//根据单价从大到小排序
	
	//贪心思维
	int remain=sum;
	double profit=0;
	/*这部分有问题，可能存在供不应求的情况 
	for(i=0;remain>0;i++){
		temp=remain-m[i].amout;
		if(temp>0){
			profit+=m[i].sale;
			remain=temp;
		}else{
			profit+=m[i].price*remain;
			remain=0;
		}
	}*/ 
	for(i=0;i<N;i++){
		if(m[i].amout<=remain){
			profit+=m[i].sale;
			remain-=m[i].amout;
		}else{
			profit+=m[i].price*remain;
			break;
		}
	} 
	printf("%.2f",profit);
	return 0;
} 
