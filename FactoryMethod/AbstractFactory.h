#pragma once
class AbstractProduct;

class AbstractFactory
{
public:
	virtual AbstractProduct* createProduct()=0;  // 创建AbstractProduct这一类对象的抽象接口
};

// AbstractFactory的子类创建不同类型(AbstractProduct下的具体对象类型)的Product
// 即不同的工厂分别负责不同产品的创建