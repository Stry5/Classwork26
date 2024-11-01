#pragma once
namespace point {
	struct Point {
		int xCoord;
		int yCoord;
	};

	// overloading operators
	bool operator ==(Point&, Point&);

	std::ostream& operator<< (std::ostream&, Point&);
}
