#include"Delete.h"

//ɾ����ϵ��
void Delete(Address* abs) {
	string t_name;
	cout << "��������Ҫɾ������ϵ�˵�������" << endl;
	cin >> t_name;
	int flag = 0;
	for (int i = 0; i < abs->Size; i++)			//ȷ��Ҫɾ�������Ƿ���ͨѶ¼��
		if (abs->personArr[i].name == t_name)
		{
			flag = i + 1;
			break;
		}
	if (flag == 0)
		cout << "��ǰͨѶ¼���޴��ˣ�" << endl;
	else
	{
		for (int j = flag; j < abs->Size; j++)
		{
			abs->personArr[j] = abs->personArr[j + 1];
		}
		abs->Size--;		//��Ա������һ
		cout << "ɾ���ɹ���" << endl;
	}
	system("pause");
	system("cls");
}