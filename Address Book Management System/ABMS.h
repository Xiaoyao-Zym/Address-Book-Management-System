#include<iostream>
#define Max 1000
using namespace std;
void showMenu();
//������ϵ�˽ṹ��
struct Person
{
    string   m_Name;          //����
    int        m_Gender;        //�Ա�1���У�2��Ů
    int        m_Age;             //����
    string   m_Address;       //סַ
    string   m_Phone;          //��ϵ�绰
};
//����ͨѶ¼�ṹ��
struct Address_Books
{
    //����ͨѶ¼�б������ϵ������
    struct Person  person_Array[Max];
    //ͨѶ¼�б��������
    int m_Size;
};
void addPerson(struct Address_Books* abs);
void showPerson(struct Address_Books* abs);
int   is_existPerson(struct Address_Books* abs, string name);
void deletePerson(struct Address_Books* abs);
void searchPerson(struct Address_Books* abs);
void modifyPerson(struct Address_Books* abs);
void cleanPerson(Address_Books* abs);