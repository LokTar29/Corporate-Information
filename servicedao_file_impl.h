#ifndef SERVICEDAO_FILE_IMPL_H
#define SERVICEDAO_FILE_IMPL_H

#include "servicedao.h"
#include "employee.h"
#include "department.h"

class Servicedao_file_impl:public Servicedao
{
public:
	void save();
	void load();
};


#endif//SERVICEDAO_FILE_IMPL_H
