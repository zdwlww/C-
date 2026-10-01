#pragma once
#include<iostream>
using namespace std;
#include<string>
#include<fstream>
#include"globaFile.h"

class Identity
{
public:
	//操作函数  纯虚函数
	virtual void operMenu() = 0;


	//用户名
	string m_Name;

	//密码
	string m_Pwd;


};