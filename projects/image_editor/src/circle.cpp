#define _USE_MATH_DEFINES

#include <cmath>

#include "circle.hpp"

namespace image_editor {

	namespace model {
		using drawer::Drawer;

		const double Circle::perimeter() const
		{
			return 2 * M_PI * radius;
		}

		const double Circle::area() const
		{
			return M_PI * radius * radius;
		}

		void Circle::draw(const Drawer* drawer) const
		{
		}

		std::ostream& operator<<(std::ostream& os, const Circle& circle)
		{
			os << "Circle{x:" << circle.x << ", y:" << circle.y << ", r: " << circle.radius;

			os << ", perimeter: " << circle.perimeter() << ", area: " << circle.area() << "}";

			return os;
		}
	}
}