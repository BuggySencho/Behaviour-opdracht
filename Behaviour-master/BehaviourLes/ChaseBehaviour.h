#pragma once
#include "Behaviour.h"

class ChaseBehaviour :
	public Behaviour
{
public:
	ChaseBehaviour();
	~ChaseBehaviour();
	int Update(int ownPosition, int targetPosition, int minPosition = 0, int maxPosition = 100);
};

