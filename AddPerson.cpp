#include"AddPerson.h"

//�����ϵ��
void AddPerson(Address* abs)		//�����ϵ�˵ĺ�������
{

	if (abs->Size == MAX)
	{
		cout << "��ǰͨѶ¼������" << endl;
		return;
	}
	cout << "������Ҫ��ӵ���ϵ�˵���Ϣ��" << endl;

	//�������	
	string name;
	cout << "������������" << endl;
	cin >> name;
	abs->personArr[abs->Size].name = name;

	//�����Ա�
	int sex1 = 0;
	cout << "�������Ա�:" << "1�����У�2����Ů" << endl;
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
			cout << "������������������" << endl;
		}
	}

	//��������
	int age = 0;
	cout << "���������䣺" << endl;
	cin >> age;
	abs->personArr[abs->Size].age = age;

	//����绰����
	string number;
	cout << "��������ϵ�绰��" << endl;
	cin >> number;
	abs->personArr[abs->Size].number = number;

	//�����ַ
	string adress;
	cout << "�������ͥסַ��" << endl;
	cin >> adress;
	abs->personArr[abs->Size].address = adress;

	abs->Size++;		//��ͨѶ¼�е���������1
	system("pause");
	system("cls");		//����

}