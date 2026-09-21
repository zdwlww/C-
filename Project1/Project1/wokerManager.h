#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#include <fstream>
#define FILENAME "empFile.txt"




class WorkerManager
{
public:
	//构造函数
	WorkerManager();

	//展示菜单
	void Show_Menu();

	//0退出
	void ExitSystem();

	//1增加




	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker **m_EmpArray;

	//添加职工
	void Add_Emp();

	//跑村文件
	void save();

	//析构函数
	~WorkerManager();

};