#include "fast_matrix.h"

namespace matrix {
	FastMatrix::FastMatrix(const int& rows, const int& cols)
		:rows_(rows)
		,cols_(cols)
		,data_(nullptr)
	{
		this->data_ = new int[rows * cols];
	}

	FastMatrix::~FastMatrix()
	{
		if (!this->data_)
		{
			delete[] this->data_;
		}
	}
	
	void FastMatrix::check_indices(const int& i, const int& j) const throw(xInvalidIndices)
	{
		if (!this->data_)
		{
			throw xInvalidIndices();
		}

		if (i < 0 || i >= rows_ || j < 0 || j >= cols_)
		{
			throw xInvalidIndices();
		}
	}

	/*
	* |#|#|#|#|#|#|
	*/
	void FastMatrix::set(const int& i, const int& j, const int& value)
	{
		this->check_indices(i, j);

		this->data_[i * cols_ + j] = value;
	}

	const int& FastMatrix::operator()(const int& i, const int& j) const
	{
		this->check_indices(i, j);

		return this->data_[i * cols_ + j];
	}
	
	const int FastMatrix::max() const
	{
		auto result = 0;

		for (auto i = 0; i < this->rows_; ++i)
		{
			for (auto j = 0; j < this->cols_; ++j)
			{
				auto value = this->operator()(i, j);
				
				if (value > result)
				{
					result = value;
				}
			}
		}

		return result;
	}

	std::ostream& operator<<(std::ostream & os, const FastMatrix& fm)
	{
		int rows = fm.rows();

		for (auto i = 0; i < fm.rows(); ++i)
		{
			for (auto j = 0; j < fm.cols(); ++j)
			{
				auto value = fm(i, j);

				os << value;

				if (j < fm.cols() - 1)
				{
					os << "\t";
				}
			}

			os << std::endl;
		}
		return os;
	}
}