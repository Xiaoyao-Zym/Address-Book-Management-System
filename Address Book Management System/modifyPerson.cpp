//�޸���ϵ��
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
    char str[5][20] = { {"����"},{"�Ա�"},{"����"},{"��ַ"},{"��ϵ�绰"} };
    while (t)
    {
        cout << "������Ҫ�޸ĵ���Ŀ��" << "�������Ա����䣬��ַ����ϵ�绰" << endl;
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
            cout << "��������ȷ���޸���" << endl;
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
          case 0:  //�޸�����
          {
            cout << "������������" << endl;
            string name_New;
            cin >> name_New;
            abs->person_Array[s].m_Name = name_New;
            cout << name_Old << "��������" << name_New << "�޸ĳɹ�" << endl;
            break;
          }
          case 1:  //�޸��Ա�
          {
            cout << "������" << name_Old << "���Ա�1���У�2��Ů" << endl;
            int gender_New;
            cin >> gender_New;
            abs->person_Array[s].m_Gender = gender_New;
            cout << name_Old << "���Ա�" << (gender_New == 1 ? "��" : "Ů")
                 << "�޸ĳɹ�" << endl;
            break;
          }
          case 2:  //�޸�����
          {
            cout << "�������µ�����" << endl;
            int age_New;
            cin >> age_New;
            abs->person_Array[s].m_Age = age_New;
            cout << name_Old << "�����䣺" << age_New << "�޸ĳɹ�" << endl;
            break;
          }
          case 3:  //�޸ĵ�ַ
          {
            cout << "�������µĵ�ַ" << endl;
            string address_New;
            cin >> address_New;
            abs->person_Array[s].m_Address = address_New;
            cout << name_Old << "�ĵ�ַ��" << address_New << "�޸ĳɹ�" << endl;
            break;
          }
          case 4:  //�޸���ϵ�绰
          {
            cout << "�������µ���ϵ�绰" << endl;
            string phone_New;
            cin >> phone_New;
            abs->person_Array[s].m_Phone = phone_New;
            cout << name_Old << "����ϵ�绰��" << phone_New << "�޸ĳɹ�"
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
    cout << "������Ҫ�޸ĵ���ϵ������" << endl;
    string name_Old;
    cin >> name_Old;
    int s = is_existPerson(abs, name_Old);
    if (s != -1)
    {
        modify(abs, s, name_Old);
    }
    else
    {
        cout << "���޴���";
    }
    system("pause");
    system("cls");   //��������
}