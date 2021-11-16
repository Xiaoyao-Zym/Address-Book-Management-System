//清空所有联系人
#include<iostream>
#include<string>
#include <ABMS.h>
void cleanPerson(Address_Books* abs)
{ 
	cout << "请再次确认是否清空联系人, 1：清空，0：不清空" << endl;
    int i;
    cin >> i;
    if (i !=0)
    {
        abs->m_Size = 0;
        cout << "通讯录已空" << endl;
    }
    system("pause");
    system("cls");
}