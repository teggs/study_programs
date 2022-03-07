#pragma once

class Student{
public:
	//two constructors
	Student();
	Student(int id, int classNum, int credit);
	~Student();

	int getID();
	void setID(int);
	int getClassNum();
	void setClassNum(int);
	int getCredit();
	void setCredit(int);

	Student operator+(const Student &a);//operator overloading. define my own "+" between 2 'Student' classes.

private:
	int id;
	int classNum;
	int credit;
};