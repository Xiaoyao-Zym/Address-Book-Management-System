//添加联系人
#include<iostream>
#include<string>
#include <ABMS.h>
void addPerson(struct Address_Books* abs)
{
	//判断通讯录已存在人数
	if (abs->m_Size < max)
	{
		//输入姓名
		string name;
		cout << "请输入联系人姓名：" << endl;
		cin >> name;
		abs->person_Array[abs->m_Size].m_Name = name;
		//输入性别
		while (true)
		 {
			int sex = 0;
			cout << "请输入联系人性别：" << "1：男，2：女" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->person_Array[abs->m_Size].m_Gender = sex;
				break;
			}
			else
			{
				cout << "输入错误，请重新输入" << endl;
				continue;
			}
		 }
		//输入年龄
		int age = 0;
		cout << "请输入联系人年龄：" << endl;
		cin >> age;
		abs->person_Array[abs->m_Size].m_Age = age;
		//输入地址
		string address;
		cout << "请输入联系人地址：" << endl;
		cin >> address;
		abs->person_Array[abs->m_Size].m_Address = address;
		//输入联系电话
		string phone;
		cout << "请输入联系人电话：" << endl;
		cin >> phone;
		abs->person_Array[abs->m_Size].m_Phone = phone;
		//更新通讯录人数
		abs->m_Size++;
		cout << "新建联系人成功" << endl;
		system("pause");
		system("cls");   //清屏操作
	}
	else
	{
		cout << "抱歉，通讯录已满，无法新建联系人" << endl;
		return;
	}
}