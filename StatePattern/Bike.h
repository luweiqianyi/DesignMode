#pragma once
class GearState; // ����״̬�����ٺͼ���
class Bike
{
public:
	// ����ʱֻ����ָ������һ���ڲ�״̬
	//Bike(GearState* state);
	Bike(); // ����Bikeʱ�ڲ�ģʽ���Գ�ʼ��һ��Ĭ��״̬����ʱ��ָ����ͨ��setState��ָ��
	~Bike();

	//�ṩ�ӿ���������Bike��״̬
	/*virtual*/  // void setState(GearState* state);
	// ���µ�ǰbike�����״̬Ϊstate,���ص�ǰbike������Ķ���֮ǰ��״̬
	 GearState* setState(GearState* state);
	/*virtual*/ GearState* getState();

	/*virtual*/ void gearUp();// ���٣�һ��Ҫ������ӿ���ͨ��m_gearState������״̬�ı仯���
	/*virtual*/ void gearDown();// ���٣�һ��Ҫ������ӿ���ͨ��m_gearState������״̬�ı仯���
	
private:
	GearState* m_gearState;
};

