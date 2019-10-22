#include "Walking.h"
#include <Idle.h>

#include <string>

void Walking::idle(PlayerFSM* a)
{
	std::cout << "Walking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}