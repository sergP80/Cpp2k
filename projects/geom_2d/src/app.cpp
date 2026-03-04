#include "app.h"

using std::cout;
using std::cin;
using std::endl;
using geom_2d::Point2D;
using geom_2d::PointDistance2D;
using geom_2d::Vector2D;

int main()
{
	Point2D point1{ 3, -4 }, point2{ 5, 2 };

	cout << point1 << endl;
	cout << point2 << endl;

	cout << point1.distance(point1) << endl;
	cout << point2.distance(point2) << endl;
	
	cout << point1.distance(point2) << endl;
	cout << point2.distance(point1) << endl;
	
	{
		PointDistance2D distance;

		cout << distance(point1, point1) << endl;
		cout << distance(point2, point2) << endl;
		cout << distance(point1, point2) << endl;
		cout << distance(point2, point1) << endl;
	}

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
