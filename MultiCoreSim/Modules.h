#pragma once
/**
* @brief ��ģ����Ϊ����ģ��ļ̳и���
*
* ��ģ�鶨����һЩ����ģ��ͨ�õĳ�Ա�����ͱ��������Ե����������롣
*/
class Modules
{
public:
	Modules(void);
	~Modules(void);
	virtual void Execute(float clock) = 0;
};

