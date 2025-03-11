#pragma once

#include <iostream>
#include <cmath>
#include "point_2d.h"

namespace geom_2d{
	
	class Vector2D {
		const Point2D start;
		const Point2D end;
	public:
		Vector2D(const int& x1, const int& y1, const int& x2, const int& y2)
			: start(Point2D(x1, y1))
			, end(Point2D(x2, y2))
		{
			std::cout << "Vector main ctr" << std::endl;
		}

		Vector2D(const Point2D& start_, const Point2D& end_)
			: start(start_)
			, end(end_)
		{}

		const int get_x() const;

		const int get_y() const;

		const double size() const;

		const double angle_x() const;

		const double angle_y() const;

		std::ostream& display(std::ostream& os) const;

		friend std::ostream& operator<<(std::ostream&, const Vector2D&);
	};

	std::ostream& operator<<(std::ostream&, const Vector2D&);
}