#include "Shovelling.h"
#include <Idle.h>

#include <string>

void Shovelling::idle(PlayerFSM* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}