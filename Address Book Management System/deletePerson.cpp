//删除联系人
#include<iostream>
#include<string>
#include <ABMS.h>
using namespace std;
void deletePerson(struct Address_Books* abs)
{
    cout << "请输入要删除的联系人姓名" << endl;
    string name;
    cin >> name;
    if (is_existPerson(abs, name) != -1)
    {
        for (int i = is_existPerson(abs, name); i < abs->m_Size; i++)
        {
            abs->person_Array[i].m_Name    =  abs->person_Array[i + 1].m_Name;
            abs->person_Array[i].m_Gender  =  abs->person_Array[i + 1].m_Gender;
            abs->person_Array[i].m_Age       =  abs->person_Array[i + 1].m_Age;
            abs->person_Array[i].m_Address =  abs->person_Array[i + 1].m_Address;
            abs->person_Array[i].m_Phone    =  abs->person_Array[i + 1].m_Phone;
            abs->m_Size--;
            cout << "联系人删除成功" << endl;
        }
    }
    else
    {
        cout << "未找到该联系人" << endl;
    }
    system("pause");
    system("cls");   //清屏操作
}