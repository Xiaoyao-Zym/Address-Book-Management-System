//修改联系人
#include<iostream>
#include<string>
#include <ABMS.h>
#include<string.h>
using namespace std;
int flag[5] = { 0 };
int len;
int* modify_Num()
{
    int t = 1;
    char item[5][10] = { 0 };
    int m = 0, n = 0;
    int num = 0;
    char str[5][20] = { {"姓名"},{"性别"},{"年龄"},{"地址"},{"联系电话"} };
    while (t)
    {
        cout << "请输入要修改的项目：" << "姓名，性别，年龄，地址，联系电话" << endl;
        string s;
        getline(cin, s);
        int  len1 = s.size();
        for (int i = 0; i < len1; i++)
        {
            if (s[i] != ' ')
            {
                item[m][n] = s[i];
                n++;
            }
            else
            {
                m++;
                n = 0;
            }
        }
        for (int j = 0; j < m + 1; j++)
        {
            for (int i = 0; i < 5; i++)
            {
                if (strcmp(item[j], str[i]) == 0)
                {
                    flag[num] = i;
                    num++;
                    t = 0;
                    break;
                }
            }
        }
        if (num == 0)
        {
            cout << "请输入正确的修改项" << endl;
            t = 1;
        }
    }
    len = sizeof(flag) / sizeof(flag[0]);
    return flag;
    system("pause");
}
void modify(struct Address_Books* abs, int s, string name_Old)
{
    int * p = modify_Num();
    for (int j = 0; j <len ; j++)
    {
      if (p[j] == 0 && p[j+1]==0) 
      {
        j = len;      
      } 
      else 
      {
        switch (p[j]) {
          case 0:  //修改姓名
          {
            cout << "请输入新姓名" << endl;
            string name_New;
            cin >> name_New;
            abs->person_Array[s].m_Name = name_New;
            cout << name_Old << "的姓名：" << name_New << "修改成功" << endl;
            break;
          }
          case 1:  //修改性别
          {
            cout << "请输入" << name_Old << "的性别，1：男，2：女" << endl;
            int gender_New;
            cin >> gender_New;
            abs->person_Array[s].m_Gender = gender_New;
            cout << name_Old << "的性别：" << (gender_New == 1 ? "男" : "女")
                 << "修改成功" << endl;
            break;
          }
          case 2:  //修改年龄
          {
            cout << "请输入新的年龄" << endl;
            int age_New;
            cin >> age_New;
            abs->person_Array[s].m_Age = age_New;
            cout << name_Old << "的年龄：" << age_New << "修改成功" << endl;
            break;
          }
          case 3:  //修改地址
          {
            cout << "请输入新的地址" << endl;
            string address_New;
            cin >> address_New;
            abs->person_Array[s].m_Address = address_New;
            cout << name_Old << "的地址：" << address_New << "修改成功" << endl;
            break;
          }
          case 4:  //修改联系电话
          {
            cout << "请输入新的联系电话" << endl;
            string phone_New;
            cin >> phone_New;
            abs->person_Array[s].m_Phone = phone_New;
            cout << name_Old << "的联系电话：" << phone_New << "修改成功"
                 << endl;
            break;
          }
          default:
            break;
        }
      }
       
    }
}
void modifyPerson(struct Address_Books* abs)
{
    cout << "请输入要修改的联系人姓名" << endl;
    string name_Old;
    cin >> name_Old;
    int s = is_existPerson(abs, name_Old);
    if (s != -1)
    {
        modify(abs, s, name_Old);
    }
    else
    {
        cout << "查无此人";
    }
    system("pause");
    system("cls");   //清屏操作
}