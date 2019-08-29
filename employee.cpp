#include "employee.h"

int Employee::get_id(void)
{
	return id;
}
char* Employee::get_name(void)
{
	return name;
}
bool Employee::get_gender(void)
{
	return gender;
}
int Employee::get_age(void)
{
	return age;
}
int Employee::get_dep(void)
{
	return dep;
}
bool Employee::change_id(int _id)
{
	id = _id;
}
bool Employee::change_name(const char* _name)
{
	delete[] name;
	name = new char [strlen(_name)+1];
	strcpy(name,_name);
	return true;
}
bool Employee::change_gender(bool _gender)
{
	gender = _gender;
}
bool Employee::change_age(int _age)
{
	age = _age;
}
bool Employee::change_dep(int _dep)
{
	dep = _dep;
}
