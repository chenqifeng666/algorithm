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
		}
		if(stu.score<min){
			min=stu.score;
			stu_min=stu_copy(stu);
		}
	}
	cout << stu_max.name << " " << stu_max.id << "\n" <<stu_min.name << " " << stu_min.id;
}
