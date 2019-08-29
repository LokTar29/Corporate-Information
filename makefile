#指定编译器
CC=g++
#指定编译标准
STD=-std=gnu99
#指定编译参数
FLAG=-Wall -Werror
#设置目标文件
OBJ=main.o employee.o department.o servicedao_file_impl.o service_impl.o serviceview_console_impl.o tools.o emis.o manager.o managerdao_file_impl.o managerservice_impl.o managerview_console_impl.o
#设置可执行文件名
BIN=管理系统

all:$(OBJ)
	$(CC) $(OBJ) -o $(BIN)
%.O:%.c
	$(CC) $(STD) $(FLAG) -c $< -o $@    
clean:
	rm -rf $(OBJ) $(BIN)
