#ifndef SERVICE_IMPL_H
#define SERVICE_IMPL_H
#include "service.h"


class Service_impl:public Service
{
public:
	bool addDept(const char* name);
	bool delDept(int id);
	void listDept(void);
	bool addEmp(const char* name,bool gender,int age,int dep);
	bool delEmp(int id);
	bool modifyEmp(int id,const char* name,bool gender,int age,int dep);
	void listEmp(int id);
	void listAllEmp(void);
};


#endif//SERVICE_IMPL_H
