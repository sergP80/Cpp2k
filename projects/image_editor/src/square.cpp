#include "square.hpp"

namespace image_editor {

	namespace model {
		using drawer::Drawer;

		const double Square::perimeter() const
		{
			return 4 * size;
		}

		const double Square::area() const
		{
			return  size * size;
		}

		void Square::draw(const Drawer* drawer) const
		{
		}

		std::ostream& operator<<(std::ostream& os, const Square& square)
		{
			os << "Square{x:" << square.x << ", y:" << square.y << ", size: " << square.size;

			os << ", perimeter: " << square.perimeter() << ", area: " << square.area() << "}";

			return os;
		}
	}
}