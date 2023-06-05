#include"Show.h"

//显示联系人
void Show(Address* abs)
{
	if (abs->Size == 0)
		cout << "当前通讯录还没有联系人" << endl;
	for (int i = 0; i < abs->Size; i++)
		cout << "姓名：" << abs->personArr[i].name
		<< "\t性别：" << (abs->personArr[i].sex == 1 ? "男" : "女")
		<< "\t年龄：" << abs->personArr[i].age
		<< "\t电话号码：" << abs->personArr[i].number
		<< "\t住址：" << abs->personArr[i].address << endl;
	system("pause");
	system("cls");		//清屏
}