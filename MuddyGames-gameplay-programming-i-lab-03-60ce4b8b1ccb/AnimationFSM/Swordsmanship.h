#pragma once
#include <State.h>
class Swordsmanship: public State
{
public:
	Swordsmanship() {};
	~Swordsmanship() {};
	void idle(PlayerFSM* a);
};

