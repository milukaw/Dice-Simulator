#pragma once
#include <cstdlib>
#include <ctime>

class DicePair
{
private:

	int m_dice1 = rand() % 6 + 1;
	int m_dice2 = rand() % 6 + 1;;

public:

	void roll();
	int get()const;

	DicePair& operator = (const DicePair& dicePair);

	DicePair& operator ! ();
};

