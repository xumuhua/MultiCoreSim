#pragma once
/**
* @brief 模拟单个核的运行
*
* 该类用来实现单个核的一些方法，比如执行指令的过程，发送数据的过程以及相应的
* 多核同步关系的处理。 
* 该类继承IO的读写端口，负责实现IO发送和接受到数据的方法。
*/
class Core
{
public:
	Core(void);
	~Core(void); 
};

