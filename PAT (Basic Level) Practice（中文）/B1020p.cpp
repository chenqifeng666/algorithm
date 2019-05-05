/*
20190505
本来想建立struct mooncake结构来存储数据，但是实体数量不可知，也不可能手动建立很多实体m1,m2... 
后来想使用vector<double> v[3];来存储输入数据以及售价，但是在排序这里就很麻烦 
现在pat上25分题只拿到23分，错了一个算例，错误为：段错误，不知道错在哪里？？？
----------
修改了贪心算法部份的内容得到满分25分，原因是没有考虑所有供不应求的情况
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

bool cmp(double a, double b){return (a > b);}
int main(){
	int N,sum,i,j;
	double temp;
	cin >> N >> sum;
	vector<double> v[3];//v[0]存库存，v[1]存售价，v[2]存单价 
	for(i=0;i<2*N;i++){
		cin>>temp;
		v[i/N].push_back(temp);  //存储输入数据 
	}
	for(j=0;j<N;j++){
		temp=v[1][j] / v[0][j];
		v[2].push_back(temp);    //算出并存储月饼单价 
	}
	vector<double> tempv2=v[2];
	sort(tempv2.begin(),tempv2.end(),cmp);//从大到小排序 
	
	vector<double>::iterator it;
	vector<int> index(N);
	for(i=0;i<N;i++){
		it=find(v[2].begin(),v[2].end(),tempv2[i]);
//		cout << (it-v[2].begin()) << "\n";
		index[i]=it-v[2].begin();//顺序索引，index[0]=2表示v[2]向量中的最大值在第三个数 
	}
	//根据贪心思想，先卖单价最高的
	int remain=sum;
	i=0;
	double profit=0.0;
	for(i=0;i<N;i++){ 
		if(remain>=v[0][index[i]]){
			profit+=v[1][index[i]];
			remain-=v[0][index[i]];
		}else{
			profit+=v[2][index[i]]*remain;
			remain=0;
		}
	}
	printf("%.2f", profit);
	return 0; 
}
