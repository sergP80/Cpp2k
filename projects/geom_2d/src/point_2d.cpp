#include "point_2d.h"

namespace geom_2d {
	Point2D::Point2D(const int& x_, const int& y_)
		: x(x_)
		, y(y_)
	{
		//std::cout << "Main Ctr" << std::endl;
	}

	Point2D& Point2D::operator=(const Point2D& rhs)
	{
		std::cout << "Assigment" << std::endl;

		if (this == &rhs)
		{
			return *this;
		}

		this->x = rhs.x;
		this->y = rhs.y;

		return *this;
	}

	const double Point2D::distance(const Point2D& rhs) const
	{
		if (this == &rhs)
		{
			return 0.0;
		}

		double dx = x - rhs.x;
		
		double dy = y - rhs.y;

		return sqrt(dx * dx + dy * dy);
	}

	std::ostream& Point2D::display(std::ostream& os) const
	{
		os << "(" << this->x << ";" << this->y << ")";

		return os;
	}

	std::ostream& operator<<(std::ostream& os, const Point2D& rhs)
	{
		return rhs.display(os);
	}
}