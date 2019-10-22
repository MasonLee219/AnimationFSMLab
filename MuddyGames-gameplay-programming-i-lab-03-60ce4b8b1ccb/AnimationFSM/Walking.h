#pragma once
#ifndef WALKING_H
#define WALKING_H
#include <State.h>

class Walking : public State
{
public:		
	Walking() {};
	~Walking() {};
	void idle(PlayerFSM* a);
};

#endif // !IDLE_H

