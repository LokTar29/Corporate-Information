#include "service_impl.h"
#include <iostream>

using namespace std;

#include "emis.h"

bool Service_impl::addDept(const char* name)
{
	for(int i=0;i<10;i++)
	{
		if (-1 == department[i]->get_id())
		{
			department[i]->change_name(name);
			department[i]->change_id(i);
			cout << "添加部门成功 id:" << i << endl;
			return true;
		}
	}
	cout << "部门已满" << endl;
	return false;
}
bool Service_impl::delDept(int id)
{
	if (-1 == department[id]->get_id())
	{
		cout << "该部门不存在" << endl;
		return false;
	}
	department[id]->change_id(-1);
	department[id]->change_num(-1);
	for(int i=0;i<100;i++)
	{
		if (-1 == employee[i]->get_id())
		{
			continue;
		}
		if (id == employee[i]->get_dep())
		{
			delEmp(i);
		}
	}
}
void Service_impl::listDept(void)
{
	for(int i=0;i<10;i++)
	{
		if (-1 == department[i]->get_id())
		{
			continue;
		}
		cout << "id:" << department[i]->get_id() << " name:" << department[i]->get_name() << " num:" << department[i]->get_num() << endl;
	}
}



bool Service_impl::addEmp(const char* name,bool gender,int age,int dep)
{
	for(int i=0;i<100;i++)
	{
		if (-1 == employee[i]->get_id())
		{
			employee[i]->change_name(name);
			employee[i]->change_gender(gender);
			employee[i]->change_id(i);
			employee[i]->change_age(age);
			employee[i]->change_dep(dep);
			department[dep]->change_num(1);
			cout << "添加成功 id:" << i << endl;
			return true;
		}
	}
	cout << "人数已满" << endl;
	return false;
}
bool Service_impl::delEmp(int id)
{
	if (-1 == employee[id]->get_id())
	{
		cout << "员工号不存在" << endl;
		return false;
	}
	employee[id]->change_id(-1);
	int dep = employee[id]->get_dep();
	department[dep]->change_num(0);
}
bool Service_impl::modifyEmp(int id,const char* name,bool gender,int age,int dep)
{
	if (-1 == employee[id]->get_id())
	{
		cout << "员工号不存在" << endl;
		return false;
	}
	employee[id]->change_name(name);
	employee[id]->change_gender(gender);
	employee[id]->change_age(age);
	if (dep != employee[id]->get_dep())
	{
		department[dep]->change_num(1);
		department[employee[id]->get_dep()]->change_num(0);
		employee[id]->change_dep(dep);
	}
	cout << "修改成功" << endl;
	return true;
}
void Service_impl::listEmp(int id)
{
	for(int i=0;i<100;i++)
	{
		if (-1 == employee[i]->get_id())
		{
			continue;
		}
		if (id == employee[i]->get_dep())
		{
			cout << "id:" << employee[i]->get_id() << " name:" << employee[i]->get_name() << " 性别:";
			if (employee[i]->get_gender())
			{
				cout << "男";
			}
			else
			{
				cout << "女";
			}
			cout << " age:" << employee[i]->get_age() << " dep:" << employee[i]->get_dep() << endl;
		}
	}
}
void Service_impl::listAllEmp(void)
{
	for(int i=0;i<100;i++)
	{
		if (-1 == employee[i]->get_id())
		{
			continue;
		}
		cout << "id:" << employee[i]->get_id() << " name:" << employee[i]->get_name() << " 性别:";
		if (employee[i]->get_gender())
		{
			cout << "男";
		}
		else
		{
			cout << "女";
		}
		cout << " age:" << employee[i]->get_age() << " dep:" << employee[i]->get_dep() << endl;
	}
}
