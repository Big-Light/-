#include"AddPerson.h"

//添加联系人
void AddPerson(Address* abs)		//添加联系人的函数声明
{

	if (abs->Size == MAX)
	{
		cout << "当前通讯录已满！" << endl;
		return;
	}
	cout << "请输入要添加的联系人的信息：" << endl;

	//添加姓名	
	string name;
	cout << "请输入姓名：" << endl;
	cin >> name;
	abs->personArr[abs->Size].name = name;

	//输入性别
	int sex1 = 0;
	cout << "请输入性别:" << "1——男，2——女" << endl;
	while (true)
	{
		cin >> sex1;
		if (sex1 == 1 || sex1 == 2)
		{
			abs->personArr[abs->Size].sex = sex1;
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
	abs->personArr[abs->Size].age = age;

	//输入电话号码
	string number;
	cout << "请输入联系电话：" << endl;
	cin >> number;
	abs->personArr[abs->Size].number = number;

	//输入地址
	string adress;
	cout << "请输入家庭住址：" << endl;
	cin >> adress;
	abs->personArr[abs->Size].address = adress;

	abs->Size++;		//让通讯录中的人数自增1
	system("pause");
	system("cls");		//清屏

}