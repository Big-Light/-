#include"Delete.h"

//删除联系人
void Delete(Address* abs) {
	string t_name;
	cout << "请输入你要删除的联系人的姓名：" << endl;
	cin >> t_name;
	int flag = 0;
	for (int i = 0; i < abs->Size; i++)			//确认要删除的人是否在通讯录中
		if (abs->personArr[i].name == t_name)
		{
			flag = i + 1;
			break;
		}
	if (flag == 0)
		cout << "当前通讯录查无此人！" << endl;
	else
	{
		for (int j = flag; j < abs->Size; j++)
		{
			abs->personArr[j] = abs->personArr[j + 1];
		}
		abs->Size--;		//人员个数减一
		cout << "删除成功！" << endl;
	}
	system("pause");
	system("cls");
}