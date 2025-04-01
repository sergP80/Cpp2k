#include "app.hpp"

using std::cout;
using std::cin;
using std::endl;
using image_editor::drawer::Drawer;
using image_editor::model::Shape2d;
using image_editor::model::Circle;
using image_editor::model::Square;
using image_editor::model::Rectangle;

int main()
{
	{
		Circle circle1{ 3, -1, 20 };

		Shape2d& rf = circle1;
		
		Shape2d* pf = &circle1;

		cout << rf.area() << endl;

		cout << circle1 << endl;
	}

	{
		Square square1{ 5, 7, 15 };

		cout << square1 << endl;
	}

	{
		Rectangle rect1{ 5, 7, 15, 22 };

		cout << rect1 << endl;
	}
	return 0;
}
