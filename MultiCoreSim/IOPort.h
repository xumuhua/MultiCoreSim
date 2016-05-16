#pragma once
/**
* @brief 该类是IO的接口类
*
* 各个使用IO端口的都继承该接口用以规范以及简化IO通讯
*/
class IOPort
{
public:
	virtual ~IOPort() = 0 {};
	/**
	* IO Master 发送读请求
	* 
	* @param valid 发送请求的握手信号
	* @param addr 发送请求的地址信号
	* @param id 发送请求的ID信号
	* @param ready 发送请求的握手信号
	*/
	virtual void IOMasterReadID(bool * valid,int * addr, int * id, bool ready) = 0;
	/**
	* IO Master 接收读数据
	* 
	* @param valid 接收数据的握手信号
	* @param data 接收数据
	* @param id 接收数据的ID信号
	* @param ready 接收数据的握手信号
	*/
	virtual void IOMasterReadData(bool * ready,float data, int id, bool valid) = 0;
	/**
	* IO Master 发送写数据
	* 
	* @param valid 发送数据的握手信号
	* @param data 发送数据
	* @param addr 发送数据的地址信号
	* @param ready 发送数据的握手信号
	*/
	virtual void IOMasterReadWrite(bool * valid, int * addr, float * data, bool ready) = 0;
	/**
	* IO Master 接收读请求
	* 
	* @param valid 接收请求的握手信号
	* @param addr 接收请求的地址信号
	* @param id 接收请求的ID信号
	* @param ready 接收请求的握手信号
	*/
	virtual void IOSlaveReadID(bool * ready, int addr, int id, bool valid) = 0;
	/**
	* IO Master 发送读数据
	* 
	* @param valid 发送数据的握手信号
	* @param data 发送数据
	* @param id 发送数据的ID信号
	* @param ready 发送数据的握手信号
	*/
	virtual void IOSlaveReadData(bool * valid, float * data, int * id, bool ready) = 0;
	/**
	* IO Master 接收写数据
	* 
	* @param valid 接收数据的握手信号
	* @param data 接收数据
	* @param addr 接收数据的地址信号
	* @param ready 接收数据的握手信号
	*/
	virtual void IOSlaveWrite(bool * ready, int addr, float data, bool valid) = 0;
};

