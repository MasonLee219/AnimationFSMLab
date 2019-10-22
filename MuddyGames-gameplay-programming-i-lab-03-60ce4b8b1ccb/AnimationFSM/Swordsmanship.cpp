#include "Swordsmanship.h"
#include <Idle.h>

#include <string>

void Swordsmanship::idle(PlayerFSM* a)
{
	std::cout << "Swordsmanship -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}