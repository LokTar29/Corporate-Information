#ifndef MANAGERSERVICE_H
#define MANAGERSERVICE_H

class ManagerService
{
public:
	virtual bool addManager(const char* name,const char* password)=0;
	virtual bool deleteManager(int id)=0;
	virtual void listManager(void)=0;
};


#endif//MANAGERSERVICE_H
