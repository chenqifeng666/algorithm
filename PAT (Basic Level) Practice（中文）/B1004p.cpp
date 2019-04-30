/*
写的有些麻烦，主要是我想用一下结构体
遇到困难：
	对于结构体的复制在这种情况下是可以直接直接赋值的（结构体不存在指针），我本来想要用构造函数来赋值（可能我对结构体还没有完全理解），后来放弃，另外使用一个函数进行逐项赋值。
	然后测试一直通不过，我也没有搞清楚具体原因，猜测是我原本使用字符数组char[10]来存储字符串,中间赋值有些问题吧。后来采用string类存储，然后将输入输出全部换成cin&cout，因为string类不能用printf直接输出。
*/
#include <cstring>
#include <iostream>
using namespace std;

struct StuInfo{
	string name;
	string id;
	int score;
}stu,stu_max,stu_min;

StuInfo stu_copy(StuInfo s){
	StuInfo s2;
	s2.name=s.name;
	s2.id=s.id;
	s2.score=s.score;
	return s2;
}

int main(){
	int n, max=-1, min=101;
	cin >> n;
	for(int i=0; i<n; ++i){
		cin >> stu.name >> stu.id >> stu.score;
		if(stu.score>max){
			max=stu.score;
			stu_max=stu_copy(stu);
			//stu_max=stu;//不调用函数也是可以的，因为结构体中不存在指针
		}
		if(stu.score<min){
			min=stu.score;
			stu_min=stu_copy(stu);
		}
	}
	cout << stu_max.name << " " << stu_max.id << "\n" <<stu_min.name << " " << stu_min.id;
}
