#ifndef MANAGERVIEW_CONSOLE_IMPL_H
#define MANAGERVIEW_CONSOLE_IMPL_H

#include "managerview.h"

class ManagerViewConsoleImpl:public ManagerView
{
public:
	void menu(void);
	void add(void);
	void del(void);
	void list(void);
};



#endif//MANAGERVIEW_CONSOLE_IMPL_H
