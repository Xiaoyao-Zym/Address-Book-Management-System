//���������ϵ��
#include<iostream>
#include<string>
#include <ABMS.h>
void cleanPerson(Address_Books* abs)
{ 
	cout << "���ٴ�ȷ���Ƿ������ϵ��, 1����գ�0�������" << endl;
    int i;
    cin >> i;
    if (i !=0)
    {
        abs->m_Size = 0;
        cout << "ͨѶ¼�ѿ�" << endl;
    }
    system("pause");
    system("cls");
}