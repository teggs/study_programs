#include "student.h"
#include "studentParser.h"
#include<iostream>
#include<vector>
using namespace std;

//now, let's test this program!
int main(void){
	vector<int> a;
	a.push_back(11);
	a.push_back(1);
	a.push_back(33);
	a.push_back(97);
	a.push_back(25);
	StudentParser myparser;
	myparser.generateInfoVector(32,a);

	vector<int> b;
	b.push_back(11);
	b.push_back(33);
	b.push_back(20);
	myparser.generateInfoVector(16,b);
	myparser.showResult();
	system("pause");
	return 0;
}
