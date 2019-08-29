#ifndef MANAGER_H
#define MANAGER_H

//超级管理员账号
#define ADMIN 10000
#define ADMINPASSWORD "123"


#include <iostream>
#include <string.h>

using namespace std;

class Manager
{
	int id;
	char* name;
	char* password;
public:
	Manager(int _id,const char* _name,const char* _password)
	{
		id = _id;
		name = new char [strlen(_name)+1];
		strcpy(name,_name);
		password = new char [strlen(_password)+1];
		strcpy(password,_password);
	}
	bool change(int _id,const char* _name,const char* _password);
	int get_id(void);
	char* get_name(void);
	char* get_password(void);
};



#endif//MANAGER_H
