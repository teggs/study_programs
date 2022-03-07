#pragma once

#include "Student.h"
#include <vector>

class StudentParser{
public:
	StudentParser();
	~StudentParser();
	
	std::vector<Student> getStudentInfo();
	void setStudentInfo(std::vector<Student> &a);

	void generateInfoVector(int, std::vector<int> &a);//core function, process the input student IDs
	void showResult();


private:
	std::vector<Student> allStudentInfo;
	void add(Student &a);
};