#pragma once
#include <State.h>
class Swordsmanship: public State
{
	Swordsmanship() {};
	~Swordsmanship() {};
	void idle(PlayerFSM* a);
};

