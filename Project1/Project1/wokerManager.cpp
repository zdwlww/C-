#include "wokerManager.h"


WorkerManager::WorkerManager()
{
	this->m_EmpNum = 0;
	this->m_EmpArray = NULL;

}

//初始化
void WorkerManager::Show_Menu()
{
	cout << "*****************************" << endl;
	cout << "************欢迎*************" << endl;
	cout << "************0退出************" << endl;
	cout << "************1增加************" << endl;
	cout << "************2显示************" << endl;
	cout << "************3删除************" << endl;
	cout << "************4修改************" << endl;
	cout << "************5查找************" << endl;
	cout << "************6排序************" << endl;
	cout << "************7清空************" << endl;
	cout << "*****************************" << endl;
	cout << endl;
}

//0退出
void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}


//添加职工
void WorkerManager::Add_Emp()
{
	cout << "请输入添加职工的数量：" << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//新空间人数
		int newSize = this->m_EmpNum + addNum;
		//开辟对应空间
		Worker** newSpace = new Worker * [newSize];
		//原来数据拷贝
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		//添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "请输入第" << i + 1 << "个新职工编号：" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个新职工名字：" << endl;
			cin >> name;

			cout << "请选择该职工岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dSelect;

			Worker *worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			//将
			newSpace[this->m_EmpNum + i] = worker;
		}

		//释放原有空间
		delete[] this->m_EmpArray;

		this->m_EmpArray = newSpace;

		this->m_EmpNum = newSize;

		cout << "成功" << endl;

		this->save();

	}
	system("pause");
	system("cls");
}


void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	//关闭
	ofs.close();

}



WorkerManager::~WorkerManager()
{

}