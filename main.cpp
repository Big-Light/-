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
	int  select;		//ѡ��ť��
	Address abs;

	while (true)
	{
		Menu();
		cin >> select;
		switch (select)
		{
			case 1:			//�����ϵ��
				AddPerson(&abs);
				break;
			case 2:			//��ʾ��ϵ��
				Show(&abs);
				break;
			case 3:			//ɾ����ϵ��
				Delete(&abs);
				break;
			case 4:			//������ϵ��
				SearchPeo(abs);
				break;
			case 5:			//�޸���ϵ��
				ChangePeo(&abs);
				break;
			case 6:			//�����ϵ��
				CleanPeo(&abs);
				break;
			case 0:			//�˳�ϵͳ
				cout << "��ӭ�´�ʹ��!"<<endl;
				system("pause");
				return 0;
			default:
				return 0;
		}
	}
}
