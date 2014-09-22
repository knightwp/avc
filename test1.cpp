#include <iostream>
using namespace std;

class Student
{
private:
	inr num;
public:
	void SetNum(int a){num = a;}
	int GetNum(){return num;}
};

int main()
{
	Student st[3];
	for(int i=0;i<=3;i++)
		st[i].num = i;
	
	cout<<st[0].GetNum()<<'\t<<st[1].GetNum()<<'\t'<<st[2].GetNum()<<endl;
}