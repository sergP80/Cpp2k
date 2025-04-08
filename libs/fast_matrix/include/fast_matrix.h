#pragma once

#include <iostream>
#include <iomanip>

namespace matrix {
	class xInvalidIndices {};

	class FastMatrix {
		const int& rows_;
		const int& cols_;
		int* data_;
		void check_indices(const int& i, const int& j) const noexcept(false);
	public:
		FastMatrix(const int& rows, const int& cols);
		
		virtual ~FastMatrix();

		const int& rows() const
		{
			return this->rows_;
		}

		const int& cols() const
		{
			return this->cols_;
		}

		void set(const int& i, const int& j, const int& value);

		const int& operator()(const int& i, const int& j) const;

		const int max() const;

		friend std::ostream& operator<< (std::ostream&, const FastMatrix&);
	};

	std::ostream& operator<<(std::ostream&, const FastMatrix&);
}