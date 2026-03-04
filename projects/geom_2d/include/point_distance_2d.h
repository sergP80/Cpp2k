#pragma once

#include "point_2d.h"

namespace geom_2d{
	class PointDistance2D
	{
	public:
		const double operator()(const Point2D& first, const Point2D& second) const;
	};
}