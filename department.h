#ifndef DEPATRMENT_H
#define DEPATRMENT_H
#include <iostream>
#include <string.h>

using namespace std;

class Department
{
	int id;
	char* name;
	int num;
public:
	Department(int _id,const char* _name,int _num)
	{
		id = _id;
		name = new char[strlen(_name)+1];
		strcpy(name,_name);
		num = _num;
	}
	int get_id(void);
	char* get_name(void);
	int get_num(void);	
	bool change_num(int _num);
	bool change_name(const char* _name);
	bool change_id(int _id);
};


#endif//DEPATRMENT_H
