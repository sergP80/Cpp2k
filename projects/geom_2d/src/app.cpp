#include "app.h"

using std::cout;
using std::cin;
using std::endl;
using geom_2d::Point2D;
using geom_2d::Vector2D;

int main()
{
	Point2D point1{ 3, -4 }, point2{ 5, 2 };

	cout << point1 << endl;
	cout << point2 << endl;

	{
		Vector2D v1{4, -3, 6, 10 };

		cout << v1 << endl;
	}

	{
		Vector2D v1{ point1, point2 };

		cout << v1 << endl;
	}

	return 0;
}
