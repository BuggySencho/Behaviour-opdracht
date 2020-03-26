#pragma once
#include <cmath>
class Character;

class Behaviour
{
public:
	Behaviour();
	~Behaviour();
	virtual int Update(int ownPosition, int targetPosition, int minPosition = 0, int maxPosition = 100);
};

