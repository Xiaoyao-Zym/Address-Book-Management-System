//�����ϵ��
#include<iostream>
#include<string>
#include <ABMS.h>
void addPerson(struct Address_Books* abs)
{
	//�ж�ͨѶ¼�Ѵ�������
	if (abs->m_Size < max)
	{
		//��������
		string name;
		cout << "��������ϵ��������" << endl;
		cin >> name;
		abs->person_Array[abs->m_Size].m_Name = name;
		//�����Ա�
		while (true)
		 {
			int sex = 0;
			cout << "��������ϵ���Ա�" << "1���У�2��Ů" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->person_Array[abs->m_Size].m_Gender = sex;
				break;
			}
			else
			{
				cout << "�����������������" << endl;
				continue;
			}
		 }
		//��������
		int age = 0;
		cout << "��������ϵ�����䣺" << endl;
		cin >> age;
		abs->person_Array[abs->m_Size].m_Age = age;
		//�����ַ
		string address;
		cout << "��������ϵ�˵�ַ��" << endl;
		cin >> address;
		abs->person_Array[abs->m_Size].m_Address = address;
		//������ϵ�绰
		string phone;
		cout << "��������ϵ�˵绰��" << endl;
		cin >> phone;
		abs->person_Array[abs->m_Size].m_Phone = phone;
		//����ͨѶ¼����
		abs->m_Size++;
		cout << "�½���ϵ�˳ɹ�" << endl;
		system("pause");
		system("cls");   //��������
	}
	else
	{
		cout << "��Ǹ��ͨѶ¼�������޷��½���ϵ��" << endl;
		return;
	}
}