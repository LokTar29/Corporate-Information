#include "managerdao_file_impl.h"
#include <iostream>
#include <fstream>
#include "emis.h"

using namespace std;

void ManagerDaoFileImpl::load()
{
	int num=0;
	fstream fs1("data/manager.txt",ios::in);
	if(!fs1.good())
	{
		cout << "manager.txt文件加载异常" << endl; 
	}
	int id;
	char name[20];
	char password[20];
	while(fs1 >> id >> name >> password)
	{
		manager[num++] = new Manager(id,name,password);
	}
	fs1.close();
}
void ManagerDaoFileImpl::save()
{
	fstream fs("data/manager.txt",ios::out);
	for(int i=0;i<10;i++)
	{
		fs << manager[i]->get_id()  << " " << manager[i]->get_name() << " " << manager[i]->get_password() << endl;
	}
	fs.close();
}
