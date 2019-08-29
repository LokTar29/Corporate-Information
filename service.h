#ifndef SERVICE_H
#define SERVICE_H

#include "employee.h"
#include "department.h"

class Service
{
public:
	virtual bool addDept(const char* name)=0;
	virtual bool delDept(int id)=0;
	virtual void listDept(void)=0;
	virtual bool addEmp(const char* name,bool gender,int age,int dep)=0;
	virtual bool delEmp(int id)=0;
	virtual bool modifyEmp(int id,const char* name,bool gender,int age,int dep)=0;
	virtual void listEmp(int id)=0;
	virtual void listAllEmp(void)=0;
};


#endif//SERVICE_H
