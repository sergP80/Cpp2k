#pragma once

#include <iostream>
#include <cmath>

namespace geom_2d{
	class Point2D {
	private:
		int x;
		int y;
	public:
		/*
		* Point2D() {}
		* Point2D(const Point2D& rhs) {}
		* Point2D(const Point2D&& rhs) {}
		* ~Point2D() {}
		* Point2D& operator=(const Point2D& rhs) {}
		* Point2D&& operator=(const Point2D&& rhs) {}
		*/
		Point2D(const int& x_, const int& y_);

		Point2D(const Point2D& rhs) : x(rhs.x), y(rhs.y) {
			std::cout << "Copy ctr" << std::endl;
		}

		~Point2D() {
			std::cout << "Destroy" << std::endl;
		}

		Point2D& operator=(const Point2D& rhs);

		const int& get_x() const { return this->x; }
		void set_x(const int& x) { this->x = x; }

		const int& get_y() const { return this->y; }
		void set_y(const int& y) { this->y = y; }

		std::ostream& display(std::ostream&) const;

		friend std::ostream& operator<<(std::ostream&, const Point2D&);
	};

	std::ostream& operator<<(std::ostream&, const Point2D&);
}