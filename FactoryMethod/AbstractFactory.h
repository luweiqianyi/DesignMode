#pragma once
class AbstractProduct;

class AbstractFactory
{
public:
	virtual AbstractProduct* createProduct()=0;  // ����AbstractProduct��һ�����ĳ���ӿ�
};

// AbstractFactory�����ഴ����ͬ����(AbstractProduct�µľ����������)��Product
// ����ͬ�Ĺ����ֱ���ͬ��Ʒ�Ĵ���