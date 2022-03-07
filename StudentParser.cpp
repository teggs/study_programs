#include "studentParser.h"
#include <iostream>

StudentParser::StudentParser(){

}

StudentParser::~StudentParser(){

}

std::vector<Student> StudentParser::getStudentInfo(){
	std::vector<Student> temp = this->allStudentInfo;
	return temp;
}

void StudentParser::setStudentInfo(std::vector<Student> &a){
	this->allStudentInfo = a;
	return;
}

void StudentParser::add(Student &a){
	//if there is no member inside the vector, put it into this vector directly
	if(this->getStudentInfo().size()==0){
		this->allStudentInfo.push_back(a);
		return;
	}

	Student temp;
	int flag = 0;
	std::vector<Student> tempVector = this->getStudentInfo();
	std::vector<Student>::iterator it;
	for(it= tempVector.begin(); it!= tempVector.end(); it++){
		temp = *it;
		if(temp.getID() == a.getID()){ // if the ID's already existed, add two objects
			temp = temp + a;
			tempVector.erase(it);
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		tempVector.push_back(temp);
	}else{// if the ID is new, push into the vector
		tempVector.push_back(a);
	}
	this->setStudentInfo(tempVector);
	return;
}

void StudentParser::generateInfoVector(int credit, std::vector<int> &a){
	std::vector<Student> studentInfo;
	std::vector<int>::iterator it;
	for(it=a.begin(); it!=a.end(); it++){
		Student temp(*it, 1, credit);
		this->add(temp);//see the 'add' function
	}
	return;
}

void StudentParser::showResult(){
	std::vector<Student>::iterator it;
	for(it= this->allStudentInfo.begin(); it!= this->allStudentInfo.end(); it++){
		std::cout<<(*it).getCredit()<<" ,"<<(*it).getClassNum()<<" ,"<<(*it).getID()<<std::endl;
	}
	return;
}