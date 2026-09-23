#include <iostream>
using namespace std;
#include "speechManager.h"
#include <string>

int main()
{
	SpeechManager sm;

	for (map<int, Speaker>::iterator it = sm.m_Speaker.begin();it != sm.m_Speaker.end();it++)
	{
		cout << "选手编号：" << it->first << "   姓名：" << it->second.m_Name << "   分数:" << it->second.m_Score[0] << endl;
	}

	int choice = 0;

	while (1)
	{
		sm.show_Menu();

		cin >> choice;

		switch (choice)
		{
			//开始比赛
		case 1:
			sm.startSpeech();
			break;
			//查看往届记录
		case 2:
			break;
			//清空比赛记录
		case 3:
			break;
			//退出系统
		case 0:
			sm.exitSystem();
			break;
		default:
			system("cls"); //清屏
			break;
		}


	}

	system("pause");

	return 0;
}