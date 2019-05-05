/*
20190504
有人直接使用向量数组对其进行归类v[num%5].push_back(num);然后对每个向量进行处理
*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
	int temp,i,N;
	cin >> N;
	vector<int> v;//如果是vector<int> v(N)则后续是从N个0后开始再继续加数字到2*N个数字 
	while(cin>>temp) v.push_back(temp); //更加适用于没有输入数字个数的情况
	//for(i=0;i<N;i++) v.push_back(temp);//应该是更好的选择，因为已经确认要输入数字的个数了
	int a1=0,a2=0,a2_flag=1,a3=0,a4_sum=0,a4_num=0,a5=-1;
	int a1_num=0,a2_num=0,a5_num=0;//计算个数，=0为不存在，输出N 
//	for(i=0;i<v.size();i++) cout << v[i] <<" ";
	for(i=0;i<v.size();i++){
		switch(v[i]%5){
			case 0:
				if(v[i]%2==0){
					a1+=v[i];
					a1_num++;
				}
				break;
			case 1:
				a2+=(a2_flag*v[i]);
				a2_flag*=-1;
				a2_num++;
				break;
			case 2:
				a3++;
				break;
			case 3:
				a4_num++;
				a4_sum+=v[i];
				break;
			default:
				if(v[i]>a5) a5=v[i];
				a5_num++;
		}
	}
	double a4=(double)a4_sum/(double)a4_num;
	if(a1_num) cout << a1<<" "; else cout << "N ";
	if(a2_num) cout << a2<<" "; else cout << "N ";
	if(a3) cout << a3<<" "; else cout << "N ";
	if(a4_num) printf("%.1f ", a4); else cout << "N ";
	if(a5_num) cout << a5; else cout << "N";
	return 0;
}
