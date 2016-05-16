#pragma once
/**
* @brief ������IO�Ľӿ���
*
* ����ʹ��IO�˿ڵĶ��̳иýӿ����Թ淶�Լ���IOͨѶ
*/
class IOPort
{
public:
	virtual ~IOPort() = 0 {};
	/**
	* IO Master ���Ͷ�����
	* 
	* @param valid ��������������ź�
	* @param addr ��������ĵ�ַ�ź�
	* @param id ���������ID�ź�
	* @param ready ��������������ź�
	*/
	virtual void IOMasterReadID(bool * valid,int * addr, int * id, bool ready) = 0;
	/**
	* IO Master ���ն�����
	* 
	* @param valid �������ݵ������ź�
	* @param data ��������
	* @param id �������ݵ�ID�ź�
	* @param ready �������ݵ������ź�
	*/
	virtual void IOMasterReadData(bool * ready,float data, int id, bool valid) = 0;
	/**
	* IO Master ����д����
	* 
	* @param valid �������ݵ������ź�
	* @param data ��������
	* @param addr �������ݵĵ�ַ�ź�
	* @param ready �������ݵ������ź�
	*/
	virtual void IOMasterReadWrite(bool * valid, int * addr, float * data, bool ready) = 0;
	/**
	* IO Master ���ն�����
	* 
	* @param valid ��������������ź�
	* @param addr ��������ĵ�ַ�ź�
	* @param id ���������ID�ź�
	* @param ready ��������������ź�
	*/
	virtual void IOSlaveReadID(bool * ready, int addr, int id, bool valid) = 0;
	/**
	* IO Master ���Ͷ�����
	* 
	* @param valid �������ݵ������ź�
	* @param data ��������
	* @param id �������ݵ�ID�ź�
	* @param ready �������ݵ������ź�
	*/
	virtual void IOSlaveReadData(bool * valid, float * data, int * id, bool ready) = 0;
	/**
	* IO Master ����д����
	* 
	* @param valid �������ݵ������ź�
	* @param data ��������
	* @param addr �������ݵĵ�ַ�ź�
	* @param ready �������ݵ������ź�
	*/
	virtual void IOSlaveWrite(bool * ready, int addr, float data, bool valid) = 0;
};

