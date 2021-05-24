#pragma once//防止头文件重复包含
#include<iostream>
using namespace std;

//身份抽象基类
class Identity
{
public:

	//操作菜单 每个人都有自己的子菜单 纯虚函数
	virtual void operMenu() = 0;
	//子类必须重写父类的虚函数，这才叫多态，否则子类就无法实例化对象
	string m_Name;//用户名
	string m_Pwd;//密码

};