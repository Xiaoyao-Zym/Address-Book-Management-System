//��ʾ�ѱ������ϵ��
#include<iostream>
#include<string>
#include <ABMS.h>
using namespace std;
void showPerson(struct Address_Books* abs)
{
	if (abs->m_Size!=0)
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->person_Array[i].m_Name << '\t';
			cout << "�Ա�" <<( abs->person_Array[i].m_Gender ==1 ?"��" :"Ů")<<'\t';
			cout << "���䣺" << abs->person_Array[i].m_Age << '\t';
			cout << "��ַ��" << abs->person_Array[i].m_Address << '\t';
			cout << "��ϵ�绰��" << abs->person_Array[i].m_Phone << endl;
		}
	}
	else
	{
		cout << "ͨѶ¼������ϵ�ˣ��������ϵ��" << endl;
	}
	system("pause");
	system("cls");
}