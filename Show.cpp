#include"Show.h"

//��ʾ��ϵ��
void Show(Address* abs)
{
	if (abs->Size == 0)
		cout << "��ǰͨѶ¼��û����ϵ��" << endl;
	for (int i = 0; i < abs->Size; i++)
		cout << "������" << abs->personArr[i].name
		<< "\t�Ա�" << (abs->personArr[i].sex == 1 ? "��" : "Ů")
		<< "\t���䣺" << abs->personArr[i].age
		<< "\t�绰���룺" << abs->personArr[i].number
		<< "\tסַ��" << abs->personArr[i].address << endl;
	system("pause");
	system("cls");		//����
}