#pragma once
#include <iostream>

using namespace std;

class Identity
{
public:
	string M_name;		//�û�����
	string M_pwd;		//����;

	virtual void Oper_Menu() = 0;	//�Ӳ˵���
};

