#include "GearState.h"

GearState::GearState()
{
}

GearState::GearState(Bike* bike)
{
	m_bike = bike;
}

void GearState::gearUp()
{
}

void GearState::gearDown()
{
}

void GearState::printCurrentState()
{
}


GearState* GearState::getCurrentState()
{
	return this;
}
