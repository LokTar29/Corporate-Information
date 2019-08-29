#include "servicedao_file_impl.h"
#include "service_impl.h"
#include "serviceview_console_impl.h"
#include "managerdao_file_impl.h"
#include "managerservice_impl.h"
#include "managerview_console_impl.h"
#include "tools.h"
#include <stdlib.h>
#include "emis.h"

ManagerDao* p = new ManagerDaoFileImpl;


void management1(void)
{
	ManagerView* p2 =new ManagerViewConsoleImpl;
	p->load();
	while(1)
	{
		system("clear");
		p2->menu();
		switch(get_cmd('0','3'))
		{
			case '1':p2->add();break;
			case '2':p2->del();break;
			case '3':p2->list();break;
			case '0':p->save();return;
		}
	}
}


void management2(void)
{
	Servicedao* p = new Servicedao_file_impl;
	p->load();
	ServiceView* p2 = new ServiceViewConsoleImpl;
	while(1)
	{
		system("clear");
		p2->menu();
		switch(get_cmd('0','8'))
		{
			case '1':p2->addDept();break;
			case '2':p2->deleteDept();break;
			case '3':p2->listDept();break;
			case '4':p2->addEmp();break;
			case '5':p2->deleteEmp();break;
			case '6':p2->modifyEmp();break;
			case '7':p2->listEmp();break;
			case '8':p2->listAllEmp();break;
			case '0':p->save();return;
		}
	}
}

void login(void)
{
	cout << "1、超级管理员登录" << endl;
	cout << "2、业务管理员登录" << endl;
	switch(get_cmd('1','2'))
	{
		case '1':
		{
			int id=0;
			char password[20]="";
			cout << "请输入您的超级管理员账号" << endl;
			cin >> id;
			cout << "请输入密码" << endl;
			cin >> password;
			if (id == ADMIN && 0 == strcmp(password,ADMINPASSWORD))
			{
				cout << "登录成功" << endl;
				management1();
			}	
			else 
			{
				cout << "登录失败" << endl;
			}
			break;
		}	
		case '2':
		{
			p->load();
			cout << "----------------" << endl;
			int id=0;
			char password[20]="";
			for(int i=0;i<3;i++)
			{
				cout << "请输入您的业务管理员账号" << endl;
				cin >> id;
				cout << "请输入密码" << endl;
				cin >> password;
				if(-1 == manager[id]->get_id()) 
				{
					cout << "账号不存在" << endl;
					continue;
				}
				if (0 == manager[id]->get_password(),password)
				{
					cout << "登录成功" << endl;
					management2();
					break;
				}
				else
				{
					cout << "密码错误" << endl;
				}
			}
		}
	}
}

int main()
{
	login();
}
