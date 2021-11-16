//显示已保存的联系人
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
			cout << "姓名：" << abs->person_Array[i].m_Name << '\t';
			cout << "性别：" <<( abs->person_Array[i].m_Gender ==1 ?"男" :"女")<<'\t';
			cout << "年龄：" << abs->person_Array[i].m_Age << '\t';
			cout << "地址：" << abs->person_Array[i].m_Address << '\t';
			cout << "联系电话：" << abs->person_Array[i].m_Phone << endl;
		}
	}
	else
	{
		cout << "通讯录中无联系人，请添加联系人" << endl;
	}
	system("pause");
	system("cls");
}