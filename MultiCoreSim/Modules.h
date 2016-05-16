#pragma once
/**
* @brief 该模块作为所有模块的继承父类
*
* 该模块定义了一些所有模块通用的成员函数和变量，用以调试整个代码。
*/
class Modules
{
public:
	Modules(void);
	~Modules(void);
	virtual void Execute(float clock) = 0;
};

