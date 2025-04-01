#pragma once

#include <iostream>
#include "shape2d.hpp"
#include "drawer.hpp"

namespace image_editor {

	namespace model {
		using drawer::Drawer;

		class Circle: public Shape2d  {
			double radius;
		public:
			Circle(const double& x_, const double& y_, const double& radius_)
				: Shape2d(x_, y_)
				, radius(radius_)
			{}

			const double perimeter() const override;

			const double area() const override;
			
			void draw(const Drawer*) const override;

			friend std::ostream& operator<<(std::ostream&, const Circle&);
		};

		std::ostream& operator<<(std::ostream&, const Circle&);
	}
}