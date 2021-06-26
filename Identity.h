#pragma once
#include <iostream>

using namespace std;

class Identity
{
public:
	string M_name;		//用户名；
	string M_pwd;		//密码;

	virtual void Oper_Menu() = 0;	//子菜单；
};

