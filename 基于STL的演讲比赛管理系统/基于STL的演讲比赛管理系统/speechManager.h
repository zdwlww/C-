#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>
#include <random>
#include <deque>
#include <numeric>
#include <string.h>
#include <fstream>

//设计演讲管理类
class SpeechManager
{
public:

	//构造函数
	SpeechManager();

	//菜单系统
	void show_Menu();

	//退出
	void exitSystem();

	//析构函数
	~SpeechManager();

	//初始化容器与属性；
	void initSpeech();

	//创建12名选手
	void createSpeaker();

	//开始比赛  比赛整个流程控制函数
	void startSpeech();

	//抽签函数
	void speechDraw();

	//比赛函数
	void speechContest();

	//显示得分
	void showScore();

	//保存记录
	void saveRecord();

	//成员属性
	//第一轮比赛选手编号容器
	vector<int>v1;

	//第一轮晋级的选手编号容器
	vector<int>v2;

	//胜出前三名选手编号容器
	vector<int>vVictory;

	//存放编号以及对应具体选手容器
	map<int, Speaker>m_Speaker;

	//存放比赛容器
	int m_Index;

};