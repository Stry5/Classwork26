#include <iostream>

namespace point {

	// Point structure
	struct Point {
		int xCoord = 0;
		int yCoord = 0;
	};

	// operator overloads
	bool operator ==(Point& point1, Point& point2) {
		return((point1.xCoord == point2.xCoord)
			&& (point1.yCoord == point2.yCoord));
	}

	std::ostream& operator<< (std::ostream& stream, Point& point) {
		stream << point.xCoord << ',' << point.yCoord;
		return stream;
	};
}
