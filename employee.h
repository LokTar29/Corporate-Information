#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
	int id;
	char* name;
	bool gender;
	int age;
	int dep;
public:
	Employee(int _id,const char* _name,bool _gender,int _age,int _dep)
	{
		id = _id;
		name = new char[strlen(_name)+1];
		strcpy(name,_name);
	/*if(0 == strcmp(sex,"男"))
			gender = true;
		else
			gender = false;
	*/
		gender = _gender;	
		age = _age;
		dep = _dep;
	}
	int get_id(void);
	char* get_name(void);
	bool get_gender(void);
	int get_age(void);
	int get_dep(void);	
	bool change_id(int _id);
	bool change_name(const char* _name);
	bool change_gender(bool _gender);
	bool change_age(int _age);
	bool change_dep(int _dep);
};


#endif//EMPLOYEE_H
