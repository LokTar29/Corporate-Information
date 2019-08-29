#include "managerview_console_impl.h"
#include "managerservice_impl.h"
#include <iostream>

using namespace std;

ManagerService* p3 = new ManagerServiceImpl;

void ManagerViewConsoleImpl::menu(void)
{
	cout << "**********************" << endl;
	cout << "1、增加业务管理员" << endl;
	cout << "2、删除业务管理员" << endl;
	cout << "3、列出业务管理员" << endl;
	cout << "0、退出" << endl;
	cout << "**********************" << endl;
}
void ManagerViewConsoleImpl::add(void)
{
	char name[20];
	char password[20];
	cout << "请输入业务管理员名称" << endl;
	cin >> name;
	cout << "请输入业务管理员密码" << endl;
	cin >> password;
	p3->addManager(name,password);
}
void ManagerViewConsoleImpl::del(void)
{
	int id=-1;
	cout << "请输入删除的业务管理员id" << endl;
	cin >> id;
	p3->deleteManager(id);
}
void ManagerViewConsoleImpl::list(void)
{
	p3->listManager();
}
