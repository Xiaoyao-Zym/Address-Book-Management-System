#include<iostream>
#include<string>
#include <ABMS.h>
using namespace std;
int main()
{
    //创建通讯录结构体变量
    struct Address_Books abs;
    //初始化通讯录结构体变量abs
    abs.m_Size = 0;
    while (true)
     {
        int slect = 0;      //用户选择
        showMenu();//菜单调用加载
        cin >> slect;
        switch (slect)
        {
          case 1:   addPerson(&abs);       break;  //添加联系人
          case 2:   showPerson(&abs);     break;  //显示联系人
          case 3:   deletePerson(&abs);   break;  //删除联系人
          case 4:   searchPerson(&abs);   break;  //查找联系人
          case 5:   modifyPerson(&abs);  break;  //修改联系人
          case 6:   cleanPerson(&abs);     break;  //清空联系人
          case 0:
           {
             cout << "欢迎下次使用" << endl;
             system("pause");
             return 0;
             break; //退出通讯录
           }
          default:
             break;
        }
     }
    system("pause");
    return 0;
}