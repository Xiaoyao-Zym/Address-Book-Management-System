#include<iostream>
#define Max 1000
using namespace std;
void showMenu();
//创建联系人结构体
struct Person
{
    string   m_Name;          //姓名
    int        m_Gender;        //性别，1：男，2：女
    int        m_Age;             //年龄
    string   m_Address;       //住址
    string   m_Phone;          //联系电话
};
//创建通讯录结构体
struct Address_Books
{
    //创建通讯录中保存的联系人数组
    struct Person  person_Array[Max];
    //通讯录中保存的人数
    int m_Size;
};
void addPerson(struct Address_Books* abs);
void showPerson(struct Address_Books* abs);
int   is_existPerson(struct Address_Books* abs, string name);
void deletePerson(struct Address_Books* abs);
void searchPerson(struct Address_Books* abs);
void modifyPerson(struct Address_Books* abs);
void cleanPerson(Address_Books* abs);