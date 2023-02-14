#include <iostream>
#include "Dice.h"
#include "DicePair.h"

int main()
{
	//std::srand(time(0));

		Dice d1, d2(3);
		std::cout << d1.get() << ' ';
		std::cout << d2.get() << std::endl; d1.roll(); std::cout << d1.get() << std::endl;
		!d1; std::cout << d1.get() << std::endl; std::cout << (!d1).get() << std::endl;
		std::cout << std::boolalpha;
		std::cout << (d1 == d2) << std::endl;
		std::cout << (d1 != d2) << std::endl;
		std::cout << (d1 > d2) << std::endl;
		std::cout << (d1 < d2) << std::endl;
		DicePair dp1, dp2;
		std::cout << dp1.get() << ' ';
		std::cout << dp2.get() << std::endl; dp1.roll(); std::cout << dp1.get() << std::endl;
		!dp1;
		std::cout << dp1.get() << std::endl;
		std::cout << (!dp1).get() << std::endl;
		dp2 = dp1;
		std::cout << dp1.get() << ' ';
		std::cout << dp2.get() << std::endl;
		//Dice d3(7);

}

