#include "DicePair.h"



void DicePair::roll()
{
	
	m_dice1 = rand() % 6 + 1;
	m_dice2 = rand() % 6 + 1;
}

int DicePair::get()
{
	return m_dice1 + m_dice2;
}

DicePair& DicePair::operator=(const DicePair& dicePair)
{
	m_dice1 = dicePair.m_dice1;
	m_dice2 = dicePair.m_dice2;

	return *this;
}

DicePair& DicePair::operator!()
{
	roll();

	return *this;
}
