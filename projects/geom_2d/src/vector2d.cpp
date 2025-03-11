#include "vector_2d.h"

namespace geom_2d {
	const int Vector2D::get_x() const
	{
		return end.get_x() - start.get_x();
	}

	const int Vector2D::get_y() const
	{
		return end.get_y() - start.get_y();
	}

	const double Vector2D::size() const
	{
		const int dx = get_x();

		const double dy = get_y();

		return std::sqrt(dx * dx + dy * dy);
	}

	const double Vector2D::angle_x() const
	{
		return std::acos(get_x() / size());
	}

	const double Vector2D::angle_y() const
	{
		return std::asin(get_x() / size());
	}

	std::ostream& Vector2D::display(std::ostream& os) const
	{
		os << "(x: " << get_x() << ", y: " << get_y() << ", size: " << size();
		
		os << ", angle x: " << angle_x() << ", angle y: " << angle_y() << ")";

		return os;
	}

	std::ostream& operator<<(std::ostream& os, const Vector2D& rhs)
	{
		return rhs.display(os);
	}
}