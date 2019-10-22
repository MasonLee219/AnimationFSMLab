#include "Hammering.h"
#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>

#include <string>

void Hammering::idle(PlayerFSM* a)
{
	std::cout << "Hammering -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}