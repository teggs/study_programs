#include "student.h"
#include <iostream>
using namespace std;

Student::Student(){

}

Student::Student(int id, int classNum, int credit){
	this->id = id;
	this->classNum = classNum;
	this->credit = credit;
}

Student::~Student(){
	
}

int Student::getID(){
	return this->id;
}

int Student::getClassNum(){
	return this->classNum;
}

int Student::getCredit(){
	return this->credit;
}

void Student::setID(int id){
	this->id = id;
	return;
}

void Student::setClassNum(int classNum){
	this->id = classNum;
	return;
}

void Student::setCredit(int credit){
	this->credit = credit;
	return;
}


Student Student::operator+(const Student &a){
	Student tmp;
	tmp.id = this->id;
	tmp.classNum = this->classNum + 1;
	tmp.credit = this->credit + a.credit;
	return tmp;
}