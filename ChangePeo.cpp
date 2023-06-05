#include"ChangePeo.h"

//修改联系人
void ChangePeo(Address* abs)
{
	string s_name;
	cout << "请输入你想修改的联系人姓名：" << endl;
	cin >> s_name;
	int flag = 0;
	for (int i = 0; i < abs->Size; i++)
	{
		if (s_name == abs->personArr[i].name)
		{
			flag = i + 1;
			//添加姓名	
			string name;
			cout << "请输入姓名：" << endl;
			cin >> name;
			abs->personArr[i].name = name;

			//输入性别
			int sex1 = 0;
			cout << "请输入性别:" << "1——男，2——女" << endl;
			while (true)
			{
				cin >> sex1;
				if (sex1 == 1 || sex1 == 2)
				{
					abs->personArr[i].sex = sex1;
					break;
				}
				else
				{
					cout << "输入有误，请重新输入" << endl;
				}
			}

			//输入年龄
			int age = 0;
			cout << "请输入年龄：" << endl;
			cin >> age;
			abs->personArr[i].age = age;

			//输入电话号码
			string number;
			cout << "请输入联系电话：" << endl;
			cin >> number;
			abs->personArr[i].number = number;

			//输入地址
			string adress;
			cout << "请输入家庭住址：" << endl;
			cin >> adress;
			abs->personArr[i].address = adress;
		}
	}
	if (flag == 0)
		cout << "抱歉，并没有这个人的信息。" << endl;
	system("pause");
	system("cls");		//清屏
}