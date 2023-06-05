#include"SearchPeo.h"

//查找联系人
void SearchPeo(Address abs)
{
	string name;
	int flag = 0;
	cout << "请输入你想查找的联系人的姓名吧：" << endl;
	cin >> name;
	for (int i = 0; i < abs.Size; i++)
	{
		if (abs.personArr[i].name == name)
		{
			flag = i + 1;
			cout << "姓名：" << abs.personArr[i].name
				<< "\t性别：" << (abs.personArr[i].sex == 1 ? "男" : "女")
				<< "\t年龄：" << abs.personArr[i].age
				<< "\t电话号码：" << abs.personArr[i].number
				<< "\t住址：" << abs.personArr[i].address << endl;
		}
	}
	if (flag == 0)
		cout << "抱歉，找不到这个人哇！" << endl;
	system("pause");
	system("cls");
}