#pragma once
#ifndef HAMMERING_H
#define HAMMERING_H

#include <State.h>

class Hammering : public State
{
public:
	Hammering() {};
	~Hammering() {};
	void idle(PlayerFSM* a);
};
#endif // !IDLE_H
