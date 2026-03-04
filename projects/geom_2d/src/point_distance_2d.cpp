#pragma once

#include "point_distance_2d.h"
#include <cmath>

namespace geom_2d{

	const double PointDistance2D::operator()(const Point2D& first, const Point2D& second) const
	{
		auto dx = first.get_x() - second.get_x();
		auto dy = first.get_y() - second.get_y();

		return std::sqrt(dx * dx + dy * dy);
	}
}