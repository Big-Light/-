#include"SearchPeo.h"

//������ϵ��
void SearchPeo(Address abs)
{
	string name;
	int flag = 0;
	cout << "������������ҵ���ϵ�˵������ɣ�" << endl;
	cin >> name;
	for (int i = 0; i < abs.Size; i++)
	{
		if (abs.personArr[i].name == name)
		{
			flag = i + 1;
			cout << "������" << abs.personArr[i].name
				<< "\t�Ա�" << (abs.personArr[i].sex == 1 ? "��" : "Ů")
				<< "\t���䣺" << abs.personArr[i].age
				<< "\t�绰���룺" << abs.personArr[i].number
				<< "\tסַ��" << abs.personArr[i].address << endl;
		}
	}
	if (flag == 0)
		cout << "��Ǹ���Ҳ���������ۣ�" << endl;
	system("pause");
	system("cls");
}