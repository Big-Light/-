#include"ChangePeo.h"

//�޸���ϵ��
void ChangePeo(Address* abs)
{
	string s_name;
	cout << "�����������޸ĵ���ϵ��������" << endl;
	cin >> s_name;
	int flag = 0;
	for (int i = 0; i < abs->Size; i++)
	{
		if (s_name == abs->personArr[i].name)
		{
			flag = i + 1;
			//�������	
			string name;
			cout << "������������" << endl;
			cin >> name;
			abs->personArr[i].name = name;

			//�����Ա�
			int sex1 = 0;
			cout << "�������Ա�:" << "1�����У�2����Ů" << endl;
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
					cout << "������������������" << endl;
				}
			}

			//��������
			int age = 0;
			cout << "���������䣺" << endl;
			cin >> age;
			abs->personArr[i].age = age;

			//����绰����
			string number;
			cout << "��������ϵ�绰��" << endl;
			cin >> number;
			abs->personArr[i].number = number;

			//�����ַ
			string adress;
			cout << "�������ͥסַ��" << endl;
			cin >> adress;
			abs->personArr[i].address = adress;
		}
	}
	if (flag == 0)
		cout << "��Ǹ����û������˵���Ϣ��" << endl;
	system("pause");
	system("cls");		//����
}