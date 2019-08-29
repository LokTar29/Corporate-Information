#ifndef MANAGERSERVICE_IMPL_H
#define MANAGERSERVICE_IMPL_H

#include "managerservice.h"

class ManagerServiceImpl:public ManagerService
{
public:
	bool addManager(const char* name,const char* password);
	bool deleteManager(int id);
	void listManager(void);
};


#endif//MANAGERSERVICE_IMPL_H

