#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Swordsmanship.h>
#include <Hammering.h>
#include <Walking.h>
#include <Shovelling.h>

#include <string>

void Idle::handleInput() {}
void Idle::update() {}

void Idle::jumping(PlayerFSM* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::climbing(PlayerFSM* a)
{
	std::cout << "Idle -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Idle::walking(PlayerFSM* a)
{
	std::cout << "Idle -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Idle::swordsmanship(PlayerFSM* a)
{
	std::cout << "Idle -> Swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}

void Idle::shovelling(PlayerFSM* a)
{
	std::cout << "Idle -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}

void Idle::hammering(PlayerFSM* a)
{
	std::cout << "Idle -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

