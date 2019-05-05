/*
20190505
�����뽨��struct mooncake�ṹ���洢���ݣ�����ʵ����������֪��Ҳ�������ֶ������ܶ�ʵ��m1,m2... 
������ʹ��vector<double> v[3];���洢���������Լ��ۼۣ���������������ͺ��鷳 
����pat��25����ֻ�õ�23�֣�����һ������������Ϊ���δ��󣬲�֪������������� 
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
	vector<double> v[3];//v[0]���棬v[1]���ۼۣ�v[2]�浥�� 
	for(i=0;i<2*N;i++){
		cin>>temp;
		v[i/N].push_back(temp);  //�洢�������� 
	}
	for(j=0;j<N;j++){
		temp=v[1][j] / v[0][j];
		v[2].push_back(temp);    //������洢�±����� 
	}
	vector<double> tempv2=v[2];
	sort(tempv2.begin(),tempv2.end(),cmp);//�Ӵ�С���� 
	
	vector<double>::iterator it;
	vector<int> index(N);
	for(i=0;i<N;i++){
		it=find(v[2].begin(),v[2].end(),tempv2[i]);
//		cout << (it-v[2].begin()) << "\n";
		index[i]=it-v[2].begin();//˳��������index[0]=2��ʾv[2]�����е����ֵ�ڵ������� 
	}
	//����̰��˼�룬����������ߵ�
	int remain=sum;
	i=0;
	double profit=0.0;
	while(remain>0){ 
		if(remain-v[0][index[i]]>=0){
			profit+=v[1][index[i]];
			remain-=v[0][index[i]];
		}else{
			profit+=v[2][index[i]]*remain;
			remain=0;
		}
		i++;
	}
	printf("%.2f", profit);
	return 0; 
}
