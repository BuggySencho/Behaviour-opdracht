#pragma once
#include "Behaviour.h"

class EvadeBehaviour :
	public Behaviour
{
public:
	EvadeBehaviour();
	~EvadeBehaviour();
	int Update(int ownPosition, int targetPosition, int minPosition = 0, int maxPosition = 100);
};

