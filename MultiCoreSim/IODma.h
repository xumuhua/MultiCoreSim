#pragma once
/**
* @brief IODma���ڵ�������Ԫ�ڲ���IO����
* 
* �����װ�˵�������Ԫ�ڹ���IO����������
*/
class IODma
{
public:
	IODma(void);
	~IODma(void);
private:
	int source_addr; ///< IO���ݵ�Դ��ַ
	int size; ///< IO���ݵ����ݹ�ģ
	int accum;
	int destine_addr;
};

