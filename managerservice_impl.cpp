#include "managerservice_impl.h"
#include "emis.h"
#include <iostream>

using namespace std;

bool ManagerServiceImpl::addManager(const char* name,const char* password)
{
	for(int i=0;i<10;i++)
	{
		if (-1 == manager[i]->get_id())
		{
			manager[i]->change(i,name,password);
			cout << "添加业务管理员成功 id:" << i << endl;
			return true;
		}
	}
	cout << "业务管理员已满" << endl;
	return false;
}
bool ManagerServiceImpl::deleteManager(int id)
{
	if (-1 == manager[id]->get_id())
	{
		cout << "该业务管理员不存在" << endl;
		return false;
	}
	manager[id]->change(-1,"","");
}
void ManagerServiceImpl::listManager(void)
{
	for(int i=0;i<10;i++)
	{
		if (-1 == manager[i]->get_id())
		{
			continue;
		}
		cout << "id:" << manager[i]->get_id() << " name:" << manager[i]->get_name() << endl;
	}
}
