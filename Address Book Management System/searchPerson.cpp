//查找联系人
#include<iostream>
#include<string>
#include <ABMS.h>
void searchPerson(struct Address_Books* abs)
{
    cout << "请输入要查找的联系人姓名" << endl;
    string name;
    cin >> name;
    int i = is_existPerson(abs, name);
    if (is_existPerson(abs, name) != -1)
    {
        cout << "姓名：" << abs->person_Array[i].m_Name << '\t';
        cout << "性别：" << (abs->person_Array[i].m_Gender == 1 ? "男" : "女") << '\t';
        cout << "年龄：" << abs->person_Array[i].m_Age << '\t';
        cout << "地址：" << abs->person_Array[i].m_Address << '\t';
        cout << "联系电话：" << abs->person_Array[i].m_Phone << endl;
    }
    else
    {
        cout << "查无此人";
    }
    system("pause");
    system("cls");   //清屏操作
}