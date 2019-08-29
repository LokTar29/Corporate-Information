#include "manager.h"

bool Manager::change(int _id,const char* _name,const char* _password)
{
	id = _id;
	delete[] name;
	name = new char [strlen(_name)+1];
	strcpy(name,_name);
	delete[] password;
	name = new char [strlen(_password)+1];
	strcpy(name,_password);
	return true;
}
int Manager::get_id(void)
{
	return id;
}
char* Manager::get_name(void)
{
	return name;
}
char* Manager::get_password(void)
{
	return password;
}

