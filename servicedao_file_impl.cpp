#include "servicedao_file_impl.h"
#include <fstream>
#include "emis.h"

void Servicedao_file_impl::load()
{
	int num1=0,num2=0;
//	cout << "--------------------------------" << endl;
	fstream fs1("data/employee.txt",ios::in);
	if(!fs1.good())
	{
		cout << "employee.txt文件加载异常" << endl; 
	}
	int id,age,dep;
	char name[20];
	bool gender;
	while(fs1 >> id >> name >> gender >> age >> dep)
	{
//		cout << id << " " << name << " " << gender << " " << age << endl;
		employee[num1++] = new Employee(id,name,gender,age,dep);
	}
//	cout << "---------------------------------" << endl;
	fstream fs2("data/department.txt",ios::in);
	if(!fs2.good())
	{
		cout << "department.txt文件加载异常" << endl; 
	}
	int _num=0;
	while(fs2 >> id >> name >> _num)
	{
//		cout << id << " " << name << " " << _num << endl;
		department[num2++] = new Department(id,name,_num);
	}
	
	fs1.close();
	fs2.close();
	
}


void Servicedao_file_impl::save()
{
	fstream fs1("data/employee.txt",ios::out);
	for(int i=0;i<100;i++)
	{
		fs1 << employee[i]->get_id() << " " << employee[i]->get_name() << " " << employee[i]->get_gender() << " " << employee[i]->get_age() << " " << employee[i]->get_dep() << endl;
	}
	
	fstream fs2("data/department.txt",ios::out);
	if(!fs2.good())
	{
		cout << "department.txt文件加载异常" << endl; 
	}
	for(int i=0;i<10;i++)
	{
		fs2 << department[i]->get_id()  << " " << department[i]->get_name() << " " << department[i]->get_num() << endl;
	}
	
	fs1.close();
	fs2.close();
}
