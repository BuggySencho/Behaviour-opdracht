#include "ChaseBehaviour.h"


ChaseBehaviour::ChaseBehaviour()
{
}

ChaseBehaviour::~ChaseBehaviour()
{
}

int ChaseBehaviour::Update(int ownPosition, int targetPosition, int minPosition, int maxPosition)
{

	if (ownPosition < targetPosition && ownPosition < maxPosition) {
		return ownPosition+1;
	}
	else if (ownPosition > targetPosition && ownPosition > minPosition) {
		return ownPosition-1;
	}
	return ownPosition;

	if (ownPosition > targetPosition && ownPosition > maxPosition)
	{
		return ownPosition - 1;
	}

	else if (ownPosition < targetPosition && ownPosition < maxPosition)
	{
		return ownPosition + 1;
	}
}
