#pragma once

#include <iostream>

#include "drawer.hpp"
#include "shape2d.hpp"

namespace image_editor {

	namespace model {
		using drawer::Drawer;

		class Square: public Shape2d {
			double size;
		public:
			Square(const double& x_, const double& y_, const double& size_)
				: Shape2d(x_, y_)
				, size(size_)
			{}

			const double perimeter() const override;

			const double area() const override;
			
			void draw(const Drawer*) const override;

			friend std::ostream& operator<<(std::ostream&, const Square&);
		};

		std::ostream& operator<<(std::ostream&, const Square&);
	}
}