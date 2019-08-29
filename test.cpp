//#include "employee.h"
//#include "department.h"
#include "servicedao_file_impl.h"
#include "service_impl.h"
#include "serviceview_console_impl.h"
#include "tools.h"
#include <stdlib.h>
#include "emis.h"
int main()
{
/*	Employee a(1,"hehe",true,12);
	cout << a.get_id() << endl;
	cout << a.get_name() << endl;
	cout << a.get_age() << endl;
	cout << a.get_id() << endl;
	Department b(2,"xixi",0);
	b.change_num(1);
	b.change_num(1);
	b.change_num(1);
	b.change_num(1);
	cout << b.get_id() << endl;
	cout << b.get_name() << endl;
	cout << b.get_num() << endl;
*/
	Servicedao* p = new Servicedao_file_impl;
	p->load();
/*	cout << employee[0]->get_id() << endl;
	cout << employee[0]->get_name() << endl;
	cout << employee[0]->get_age() << endl;
	cout << department[0]->get_name() << endl;
	department[0]->change_name("xixi");
	cout << department[0]->get_name() << endl;
	cout << "----------------------------" << endl;
	Service* p1 = new  Service_impl;
	p1->addDept("one");
	p1->addDept("second");
	p1->addEmp("haha",1,20,0);
	p1->addEmp("hehe",0,21,0);
	p1->addEmp("xixi",1,22,1);
	p1->listEmp(0);
	p1->listDept();
	cout << "-----------------------" << endl;
	p1->delDept(0);
	cout << "-----------------------" << endl;
	p1->listEmp(1);
	cout << "-----------------------" << endl;
*/
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
			case '0':p->save();return 0;
		}
	}
	p->save();
}
