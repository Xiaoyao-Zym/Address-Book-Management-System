//������ϵ��
#include<iostream>
#include<string>
#include <ABMS.h>
void searchPerson(struct Address_Books* abs)
{
    cout << "������Ҫ���ҵ���ϵ������" << endl;
    string name;
    cin >> name;
    int i = is_existPerson(abs, name);
    if (is_existPerson(abs, name) != -1)
    {
        cout << "������" << abs->person_Array[i].m_Name << '\t';
        cout << "�Ա�" << (abs->person_Array[i].m_Gender == 1 ? "��" : "Ů") << '\t';
        cout << "���䣺" << abs->person_Array[i].m_Age << '\t';
        cout << "��ַ��" << abs->person_Array[i].m_Address << '\t';
        cout << "��ϵ�绰��" << abs->person_Array[i].m_Phone << endl;
    }
    else
    {
        cout << "���޴���";
    }
    system("pause");
    system("cls");   //��������
}