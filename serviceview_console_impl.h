#ifndef SERVICEVIEW_CONSOLE_IMPL_H
#define SERVICEVIEW_CONSOLE_IMPL_H
#include "serviceview.h"

class ServiceViewConsoleImpl:public ServiceView
{
public:
	void menu(void);
	void addDept(void);
	void deleteDept(void);
	void listDept(void);
	void addEmp(void);
	void deleteEmp(void);
	void modifyEmp(void);
	void listEmp(void);
	void listAllEmp(void);
};

#endif//SERVICEVIEW_CONSOLE_IMPL_H
