#pragma once
#include <iostream>
using namespace std;
#include <string>


//工人类
class Worker
{
public:

	//显示个人信息
	virtual void shoeInfo() = 0;

	//获取岗位名称
	virtual string getDeptName() = 0;

	//编号
	int m_Id;
	//姓名
	string m_Name;
	//部门编号
	int m_DeptId;
};
