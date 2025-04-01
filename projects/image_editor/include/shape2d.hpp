#pragma once

#include "drawer.hpp"

namespace image_editor {

	namespace model {
		using drawer::Drawer;

		class Shape2d {
		protected:
			double x;
			double y;
		public:
			Shape2d(const double& x_, const double& y_)
				: x(x_)
				, y(y_)
			{}

			virtual const double perimeter() const = 0;

			virtual const double area() const = 0;
			
			virtual void draw(const Drawer*) const = 0;
		};		
	}
}