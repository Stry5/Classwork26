#include <iostream>
#include "point.h"

int main()
{
	// hardcoded variables
	// only for code demonstration purposes
	point::Point p1 = { 1,2 };
	point::Point p2 = { 3,4 };

	if (p1 == p2) {
		std::cout << "equal!\n";
		std::cout << "P1: (" << p1 << ")\n";
		std::cout << "P2: (" << p2 << ")\n";

	}
	else {
		std::cout << "not equal\n";
		std::cout << "P1: (" << p1 << ")\n";
		std::cout << "P2: (" << p2 << ")\n";
	}
	return 0;
}