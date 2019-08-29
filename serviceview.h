#ifndef SERVICEVIEW_H
#define SERVICEVIEW_H

class ServiceView
{
public:
	virtual void menu(void)=0;
	virtual void addDept(void)=0;
	virtual void deleteDept(void)=0;
	virtual void listDept(void)=0;
	virtual void addEmp(void)=0;
	virtual void deleteEmp(void)=0;
	virtual void modifyEmp(void)=0;
	virtual void listEmp(void)=0;
	virtual void listAllEmp(void)=0;
};

#endif//SERVICEVIEW_H
