//检查联系人是否存在
#include<iostream>
#include<string>
#include <ABMS.h>
using namespace std;
int is_existPerson(struct Address_Books * abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if ( abs->person_Array[i].m_Name==name )
			   return i ;
	}
	return -1;
}