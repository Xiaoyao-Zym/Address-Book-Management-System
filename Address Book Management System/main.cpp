#include<iostream>
#include<string>
#include <ABMS.h>
using namespace std;
int main()
{
    //����ͨѶ¼�ṹ�����
    struct Address_Books abs;
    //��ʼ��ͨѶ¼�ṹ�����abs
    abs.m_Size = 0;
    while (true)
     {
        int slect = 0;      //�û�ѡ��
        showMenu();//�˵����ü���
        cin >> slect;
        switch (slect)
        {
          case 1:   addPerson(&abs);       break;  //�����ϵ��
          case 2:   showPerson(&abs);     break;  //��ʾ��ϵ��
          case 3:   deletePerson(&abs);   break;  //ɾ����ϵ��
          case 4:   searchPerson(&abs);   break;  //������ϵ��
          case 5:   modifyPerson(&abs);  break;  //�޸���ϵ��
          case 6:   cleanPerson(&abs);     break;  //�����ϵ��
          case 0:
           {
             cout << "��ӭ�´�ʹ��" << endl;
             system("pause");
             return 0;
             break; //�˳�ͨѶ¼
           }
          default:
             break;
        }
     }
    system("pause");
    return 0;
}