#include "Dice.h"
#include <cstdlib>
#include <ctime>

Dice::Dice(int mp)
{
	if (mp == 0)
		roll();
	else
		m_points = mp;
}

Dice::Dice(const Dice& orgD)
{
	m_points = orgD.m_points;
}

void Dice::roll()
{
	srand(time(NULL));
	m_points = rand() % 6 + 1;
}

int Dice::get() const
{
	return m_points;
}

Dice& Dice::operator=(const Dice& dice)
{
	m_points = dice.m_points;
	return *this;
}

bool Dice::operator==(const Dice& dice) const
{
	return m_points == dice.m_points;
}

bool Dice::operator!=(const Dice& dice) const
{
	return m_points != dice.m_points;
}

bool Dice::operator<(const Dice& dice) const
{
	return m_points < dice.m_points;
}

bool Dice::operator>(const Dice& dice) const
{
	return m_points > dice.m_points;
}

Dice& Dice::operator!()
{

	m_points = rand() % 6 + 1;
	return *this;
}

