#pragma once
class AbstractObserver
{

public:
	AbstractObserver();
	~AbstractObserver();
	virtual void handle();
};

