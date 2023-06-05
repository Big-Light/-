#include<iostream>
using namespace std;
#include<string>
#include"Menu.h"
#include"AddPerson.h"
#include"Address.h"
#include"Peole.h"
#include"Show.h"
#include"Delete.h"
#include"SearchPeo.h"
#include"ChangePeo.h"
#include"CleanPeo.h"

int main()
{
	int  select;		//选择按钮；
	Address abs;

	while (true)
	{
		Menu();
		cin >> select;
		switch (select)
		{
			case 1:			//添加联系人
				AddPerson(&abs);
				break;
			case 2:			//显示联系人
				Show(&abs);
				break;
			case 3:			//删除联系人
				Delete(&abs);
				break;
			case 4:			//查找联系人
				SearchPeo(abs);
				break;
			case 5:			//修改联系人
				ChangePeo(&abs);
				break;
			case 6:			//清空联系人
				CleanPeo(&abs);
				break;
			case 0:			//退出系统
				cout << "欢迎下次使用!"<<endl;
				system("pause");
				return 0;
			default:
				return 0;
		}
	}
}
