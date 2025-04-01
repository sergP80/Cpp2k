#pragma once

#include <iostream>

#include "drawer.hpp"
#include "shape2d.hpp"

namespace image_editor {

	namespace model {
		using drawer::Drawer;

		class Rectangle: public Shape2d {
			double width;
			double height;
		public:
			Rectangle(const double& x_, const double& y_, const double& width_, const double& height_)
				: Shape2d(x_, y_)
				, width(width_)
				, height(height_)
			{}

			const double perimeter() const override;

			const double area() const override;
			
			void draw(const Drawer*) const override;

			friend std::ostream& operator<<(std::ostream&, const Rectangle&);
		};

		std::ostream& operator<<(std::ostream&, const Rectangle&);
	}
}