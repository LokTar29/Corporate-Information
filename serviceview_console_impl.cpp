#include "serviceview_console_impl.h"
#include "service_impl.h"
#include <iostream>
using namespace std;
Service* p1 = new  Service_impl;
void ServiceViewConsoleImpl::menu(void)
{
	cout << "**********************" << endl;
	cout << "1、增加部门" << endl;
	cout << "2、删除部门" << endl;
	cout << "3、列出部门" << endl;
	cout << "4、增加员工" << endl;
	cout << "5、删除员工" << endl;
	cout << "6、修改员工信息" << endl;
	cout << "7、列出部门员工" << endl;
	cout << "8、列出所有员工" << endl;
	cout << "0、退出" << endl;
	cout << "**********************" << endl;
}
void ServiceViewConsoleImpl::addDept(void)
{
	char name[20];
	cout << "请输入部门名称" << endl;
	cin >> name;
	p1->addDept(name);
}
void ServiceViewConsoleImpl::deleteDept(void)
{
	int id=-1;
	cout << "请输入部门id" << endl;
	cin >> id;
	p1->delDept(id);
}
void ServiceViewConsoleImpl::listDept(void)
{
	p1->listDept();
}
void ServiceViewConsoleImpl::addEmp(void)
{
	char name[20];
	int age,dep;
	bool gender;
	cout << "请输入员工的姓名" << endl;
	cin >> name;
	cout << "请输入员工的性别(男1/女0)" << endl;
	cin >> gender;
	cout << "请输入员工的年龄" << endl;
	cin >> age;
	cout << "请输入员工的部门号" << endl;
	cin >> dep;
	p1->addEmp(name,gender,age,dep);
}
void ServiceViewConsoleImpl::deleteEmp(void)
{
	int id;
	cout << "请输入员工的id" << endl;
	cin >> id;
	p1->delEmp(id);
}
void ServiceViewConsoleImpl::modifyEmp(void)
{
	char name[20];
	int id,age,dep;
	bool gender;
	cout << "请输入员工的id" << endl;
	cin >> id;
	cout << "请输入员工的姓名" << endl;
	cin >> name;
	cout << "请输入员工的性别(男1/女0)" << endl;
	cin >> gender;
	cout << "请输入员工的年龄" << endl;
	cin >> age;
	cout << "请输入员工的部门号" << endl;
	cin >> dep;
	p1->modifyEmp(id,name,gender,age,dep);
}
void ServiceViewConsoleImpl::listEmp(void)
{
	int id;
	cout << "请输入部门的编号" << endl;
	cin >> id;
	p1->listEmp(id);
}
void ServiceViewConsoleImpl::listAllEmp(void)
{
	p1->listAllEmp();
}
