#include "Decorator.h"

Decorator::Decorator()
{
	m_componnet = nullptr;
}

Decorator::~Decorator()
{
	if (m_componnet) {
		delete m_componnet;
		m_componnet = nullptr;
	}
}

Decorator::Decorator(AbstractComponent* abstractComponent)
{
	m_componnet = abstractComponent;
}

// �ⲿ����ע��������е���
void Decorator::operation()
{
	if (m_componnet) {
		m_componnet->operation();
	}
}
