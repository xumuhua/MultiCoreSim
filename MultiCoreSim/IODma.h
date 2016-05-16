#pragma once
/**
* @brief IODma是在单个处理单元内部的IO请求
* 
* 该类包装了单个处理单元内关于IO的所有事情
*/
class IODma
{
public:
	IODma(void);
	~IODma(void);
private:
	int source_addr; ///< IO数据的源地址
	int size; ///< IO数据的数据规模
	int accum;
	int destine_addr;
};

