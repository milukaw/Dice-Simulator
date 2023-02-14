#pragma once
class Dice
{
private:
	int m_points;

public:
	
	Dice(int mp = 0);
	Dice(const Dice& orgD);
	void roll();
	int get() const;
	
	Dice& operator = (const Dice& dice);

	bool operator == (const Dice& dice) const;
	bool operator != (const Dice& dice) const;
	bool operator < (const Dice& dice) const;
	bool operator > (const Dice& dice) const;

	Dice& operator ! ();
	
};

