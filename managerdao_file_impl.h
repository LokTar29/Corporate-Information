#ifndef MANAGERDAO_FILE_IMPL_H
#define MANAGERDAO_FILE_IMPL_H

#include "managerdao.h"
#include "manager.h"

class ManagerDaoFileImpl:public ManagerDao
{
public:
	void save();
	void load();
};


#endif//MANAGERDAO_FILE_IMPL_H
