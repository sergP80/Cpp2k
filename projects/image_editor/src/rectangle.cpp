#include "rectangle.hpp"

namespace image_editor {

	namespace model {
		using drawer::Drawer;

		const double Rectangle::perimeter() const
		{
			return 2 * (width + height);
		}

		const double Rectangle::area() const
		{
			return  width * height;
		}

		void Rectangle::draw(const Drawer* drawer) const
		{
		}

		std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle)
		{
			os << "Rectangle{x:" << rectangle.x << ", y:" << rectangle.y;
			os << ", width: " << rectangle.width << ", height: " << rectangle.height;

			os << ", perimeter: " << rectangle.perimeter() << ", area: " << rectangle.area() << "}";

			return os;
		}
	}
}