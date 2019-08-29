#include "department.h"

int Department::get_id(void)
{
	return id;
}
char* Department::get_name(void)
{
	return name;
}
int Department::get_num(void)
{
	return num;
}
bool Department::change_num(int _num)
{
	if (1 == _num)
	{
		num++;
	}
	else if(-1 == _num)
	{
		num=0;
	}
	else if(0 == _num)
	{
		num--;
	}
}
bool Department::change_name(const char* _name)
{
	delete[] name;
	name = new char [strlen(_name)+1];
	strcpy(name,_name);
	return true;
}
bool Department::change_id(int _id)
{
	id = _id;	
}
