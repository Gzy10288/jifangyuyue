#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>
using namespace std;

//��ݳ������
class Identity
{
public:

	//�����˵� ÿ���˶����Լ����Ӳ˵� ���麯��
	virtual void operMenu() = 0;
	//���������д������麯������Žж�̬������������޷�ʵ��������
	string m_Name;//�û���
	string m_Pwd;//����

};